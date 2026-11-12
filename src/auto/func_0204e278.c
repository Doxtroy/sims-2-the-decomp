/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0211e71c;
extern u8 data_0213d8cc;
extern u8 data_0213d86c;
extern u8 data_0213d8d0;
extern u8 data_0213d87c;
extern u8 data_0213d8c8;

s32 func_02046880(s32, s32, s32);
void func_0210a69c(void *, void *);
void func_0203b594(s32, s32, void *, s32, s32);
void func_0203b6b0(s32, s32, void *);
void func_0204681c(s32);
void func_0204db94(u8 *, s32);
void func_0204da58(void);

void func_0204e278(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    u8 *r7;
    s32 r6;
    u8 *r5;
    s32 r4;
    u16 *p;
    s32 n;
    u32 sum;
    s32 res;
    s32 r1v;
    enum {
        SZ = 0x14
    } sz;

    r4                      = arg1 * 0x18;
    r7                      = &data_0211e71c + r4;
    res                     = func_02046880(0x400, 3, 4);
    r6                      = *(s32 *) (&data_0213d8cc + r4);
    r5                      = (u8 *) (*(s32 *) (&data_0213d86c + arg1 * 4) + (r6 << 5));
    r1v                     = *(s32 *) (&data_0213d8d0 + r4);
    *(s32 *) &data_0213d87c = res;
    *(s32 *) (r5 + 0x8)     = r1v + 1;
    *(u8 *) (r5 + 0xC)      = arg2;
    *(u8 *) (r5 + 0xD)      = arg3;
    *(s32 *) (r5 + 0x4)     = *(s32 *) (r7 + 0x4);
    func_0210a69c(r5, r7);
    *(u8 *) (r5 + 0x12) = 1;
    sz                  = SZ;
    n                   = (sz >> 1) - 1;
    sum                 = 0;
    p                   = (u16 *) r5;
    *(u16 *) (r5 + 0xE) = 0;
    do {
        sum = (u16) (sum + *p++);
    } while (n-- != 0);
    *(u16 *) (r5 + 0xE) = (u16) (0 - sum);
    r1v                 = *(s32 *) (&data_0213d8c8 + r4);
    r6                  = r6 * *(s32 *) (r7 + 0xC) + r1v;
    if (arg4 != 0) {
        *(s32 *) (&data_0213d87c + 0x10) = arg4;
        *(s32 *) (&data_0213d87c + 0x8)  = 0;
        func_0203b594(r6, 0x14, r5, (s32) func_0204da58, 0);
    } else {
        func_0203b6b0(r6, 0x14, r5);
        func_0204681c(*(s32 *) &data_0213d87c);
    }
    *(u8 *) (r5 + 0x1F) = 1;
    *(u8 *) (r5 + 0x1E) = 1;
    *(u8 *) (r5 + 0x1D) = 1;
    func_0204db94(arg0, arg1);
}
