/* compiler: 1.2/sp2p3 -nointerworking */
#include "m2c.h"
extern s32 data_02138a5c;
extern s32 data_021430b8;
extern s32 *data_02138a64;
extern s32 *data_02138a60;
extern u32 data_021430b4;
s32 *func_020de8e4(s32);
void func_020de890(s32 *);
void func_0210816c(s32 *, s32 *, s32);

void func_020e3c5c(s32 arg0, u32 arg1) {
    s32 *r5;
    s32 *r4;
    s32 a;
    s32 b;
    u32 x;
    u32 t;
    u32 k;

    a = data_02138a5c;
    b = data_021430b8;
    if (a == b) {
        r5 = func_020de8e4(a << 4);
        r4 = r5 + data_02138a5c * 2;
        func_0210816c(r5, data_02138a64, data_02138a5c << 2);
        func_0210816c(r4, data_02138a60, data_02138a5c << 2);
        data_02138a5c = data_02138a5c << 1;
        if (data_02138a5c != 0x40) {
            func_020de890(data_02138a64);
        }
        data_02138a64 = r5;
        data_02138a60 = r4;
    }
    t = (arg1 + 0x1f) & ~0x1fU;
    k = (((data_021430b4 >> 5) & 0x1f) + 0x21 - ((t >> 5) & 0x1f)) & 0x1f;
    t = t + (k << 5);
    data_021430b4 += t;
    data_02138a60[data_021430b8]   = t;
    data_02138a64[data_021430b8++] = arg0;
}
