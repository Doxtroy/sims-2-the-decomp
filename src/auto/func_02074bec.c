/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct S {
    s32 a;
    s32 b;
    s32 c;
} S;
typedef struct O {
    s32 x0;
    s32 x4;
    s32 x8;
    s32 xc;
    S s[5];
    s32 x4c;
    s32 x50;
    s32 x54[6];
    s32 x6c;
    u8 pad70[4];
    u8 b74;
    u8 b75;
} O;
extern s32 data_0211fb08;
void func_02074bec(O *o) {
    volatile s32 t[8];
    s32 v = data_0211fb08 << 12;
    s32 i;
    t[0]   = v;
    t[4]   = v;
    o->x4  = v;
    t[1]   = v;
    t[5]   = v;
    o->x0  = v;
    o->x8  = 0;
    t[2]   = 0;
    t[6]   = 0;
    o->xc  = 0;
    o->x50 = -1;
    o->x4c = 0;
    o->b74 = 0;
    o->b75 = 0;
    o->x6c = -1;
    t[3]   = 0x1e0000;
    for (i = 0; i <= 5; i++) {
        s32 w     = t[3];
        t[7]      = w;
        o->x54[i] = w;
    }
    {
        s32 k;
        S *s = o->s;
        for (k = 0; k < 5; k++, s++) {
            s->c = 0;
            s->a = 0;
            s->b = 0;
        }
    }
}
