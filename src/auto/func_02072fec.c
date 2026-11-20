/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct T {
    s32 a;
    s32 b;
    s32 c;
} T;
typedef struct G {
    u8 pad[0x5f];
    u8 x5f;
} G;
typedef struct O {
    u8 pad[0x2c8];
    s32 x2c8;
    s32 x2cc;
    s32 x2d0;
    s32 x2d4;
} O;
extern G *data_0213e434;

void func_02072fec(O *o, T t) {
    while (o->x2c8 != 0 && o->x2cc < t.b) {
        o->x2c8--;
        o->x2cc += data_0213e434->x5f * 7200 + 259200;
    }
    while (o->x2d0 > 0 && o->x2d4 < t.b) {
        o->x2d4 += 604800;
        o->x2d0 -= 5;
    }
}
