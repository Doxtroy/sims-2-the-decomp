/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
typedef int BOOL;

typedef struct WMStatus {
    u16 state;
    u16 busyApiid;
    u32 apiBusy;
    u8 pad_08[4];
    u32 mpFlag;
} WMStatus;

typedef void (*WMCallbackFunc)(void *arg);

typedef struct WMArm9Buf {
    void *arm7Buf;
    WMStatus *status;
    u8 pad_08[0x15c - 0x8];
    u32 unk_15c;
    u8 dsInfo[4];
} WMArm9Buf;

typedef struct WMCallback {
    u16 apiid;
    u16 errcode;
} WMCallback;

extern int func_02104d58(int count, ...);
extern WMArm9Buf *func_02104e78(void);
extern void func_020fae5c(void *addr, u32 size);
extern int func_02106b78(void *dsInfo, u16 port, u16 aidBitmap, u16 dataLength, BOOL doubleMode);

int func_02106ec0(WMCallbackFunc callback) {
    WMArm9Buf *p = func_02104e78();
    int result   = func_02104d58(2, 9, 10);
    WMCallback arg;

    if (result != 0) {
        return result;
    }
    func_020fae5c(&p->status->mpFlag, 4);
    if (p->status->mpFlag == 0) {
        return 3;
    }
    p->unk_15c  = 1;
    arg.errcode = func_02106b78(p->dsInfo, 8, 0xffff, 2, 1);
    arg.apiid   = 0x15;
    callback(&arg);
    return 2;
}
