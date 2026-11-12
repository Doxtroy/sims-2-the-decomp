/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern u8 data_02148260;
extern u8 func_01ff8000;
extern u8 func_02104484;
s32 func_020fb5e8(void);
void func_020fae78(s32, s32);
void func_020fae5c(s32, s32);
void func_020faec4(s32, s32);
void func_020f9b40(s32, void *);
void func_020f9934(s32);
void _Z24EnableSpecificInterruptsj(u32);
void func_020faeb8(void);
void func_020fbeb4(s32);
void func_021044f8(void);
s32 func_020fbea0(void);

s32 func_02104330(u8 *arg0) {
    u8 *g;
    s32 r8;
    s32 r7;
    s32 r6;
    s32 r5;
    s32 r4;
    s32 r3;
    s32 r2;
    s32 r1;
    s32 r0;
    g  = (u8 *) &data_02148260;
    r1 = r5 = r6 = r7 = 0;
    r4                = *(s32 *) (g + 0x1c);
    if ((r4 & 3) == 0 && (u32) * (s32 *) (g + 0x24) <= 3) {
        r1 = 1;
    }
    if (r1 != 0) {
        r8 = *(s32 *) (g + 0x20);
        r0 = func_020fb5e8();
        r2 = r4 + r8;
        r3 = 1;
        r1 = 0;
        if ((u32) r2 > (u32) &func_01ff8000) {
            if ((u32) r4 < 0x2000000) {
                r1 = r3;
            }
        }
        if (r1 == 0) {
            if ((u32) r0 >= (u32) r2 || (u32) (r0 + 0x4000) <= (u32) r4) {
                r3 = 0;
            }
        }
        if (r3 == 0) {
            r5 = 1;
        }
    }
    if (r5 != 0) {
        r2 = *(s32 *) (g + 0x18) | *(s32 *) (g + 0x20);
        r1 = r2;
        if ((r1 & 0x1ff) == 0) {
            r6 = 1;
        }
    }
    if (r6 != 0) {
        r0 = *(s32 *) (g + 0x20);
        if (r0 != 0) {
            r7 = 1;
        }
    }
    r0                  = *(volatile s32 *) 0x027ffe60;
    r0                  = (r0 & ~0x07000000) | 0xa1000000;
    *(s32 *) (arg0 + 4) = r0;
    if (r7 != 0) {
        r4 = func_020fbea0();
        func_020fae78(*(s32 *) (g + 0x1c), *(s32 *) (g + 0x20));
        func_020fae5c(*(s32 *) (g + 0x1c), *(s32 *) (g + 0x20));
        func_020faec4(*(s32 *) (g + 0x1c), *(s32 *) (g + 0x20));
        func_020f9b40(0x80000, (void *) &func_02104484);
        func_020f9934(0x80000);
        _Z24EnableSpecificInterruptsj(0x80000);
        func_020faeb8();
        func_020fbeb4(r4);
        func_021044f8();
    }
    return r7;
}
