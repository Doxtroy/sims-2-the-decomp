/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 data_0213e580;
extern s32 data_0213d7b0;
extern s32 data_0213d7b8;

void func_02064d0c(void *o, void *p);
void func_0204d298(void *p, s32 n);
void func_0205eb60(void *p);
void func_0208376c(void *p);
void func_02077604(void *p);
void func_02072ed0(void *p);
void func_02082c90(void *p);
void func_02078570(void *p);
void func_020746e4(void *p);
void func_020746ac(void *p);
void func_0205df1c(void *p);
void func_020a3b30(void *p);
void func_02075b1c(void *p);
void func_0205ee54(void *p);
void func_02063794(void *p);
void func_02073fcc(void *p);
void func_02089df8(void *p);

void func_020646a4(u8 *arg0) {
    volatile s32 fr[4];
    s32 *lr;
    s32 i;
    s32 t;
    u8 *r5;

    arg0[0x50]                      = (u8) * (s32 *) ((u8 *) data_0213e580 + 0xf4);
    lr                              = *(s32 **) ((u8 *) data_0213e580 + 0xf8);
    t                               = lr[0x78 / 4];
    lr                              = (s32 *) ((u8 *) lr + 0x78);
    fr[1]                           = t;
    *(volatile s32 *) (arg0 + 0x44) = t;
    t                               = lr[1];
    fr[2]                           = t;
    *(volatile s32 *) (arg0 + 0x48) = t;
    t                               = lr[2];
    fr[3]                           = t;
    *(volatile s32 *) (arg0 + 0x4c) = t;
    func_02064d0c(arg0, (u8 *) &data_0213d7b8 + *(s32 *) ((u8 *) &data_0213d7b0 + 0xa4) * 0x30);
    func_0204d298(arg0, 3);
    func_0204d298(arg0 + 4, 7);
    func_0204d298(arg0 + 0x4814, 0xb);
    func_0204d298(arg0 + 0x47a0, 4);
    func_0204d298(arg0 + 0x467c, 0x30);
    func_0204d298(arg0 + 0x47ac, 0x28);
    func_0205eb60(arg0 + 0xc);
    func_0208376c(arg0 + 0x18);
    func_02077604(arg0 + 0x2f78);
    func_02072ed0(arg0 + 0x41f8);
    func_02082c90(arg0 + 0x2fa4);
    func_02078570(arg0 + 0x21dc);
    func_020746e4(arg0 + 0x2164);
    func_020746ac(arg0 + 0x2f60);
    func_0205df1c(arg0 + 0x3030);
    func_020a3b30(arg0 + 0x31c8);
    func_02075b1c(arg0 + 0x41e4);
    func_0205ee54(arg0 + 0x4530);
    func_02063794(arg0 + 0x4620);
    func_02073fcc(arg0 + 0x45e4);
    func_02089df8(arg0 + 0x4648);
    i  = 0;
    r5 = arg0 + 0x46dc;
    do {
        func_0204d298(r5, 0x40);
        i  = i + 1;
        r5 = r5 + 0x40;
    } while (i < 3);
    fr[0] = 0x75bcd15;
    func_0204d298(fr, 4);
}
