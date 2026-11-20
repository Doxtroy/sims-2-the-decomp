/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u8 pad[0x50];
    s32 x50;
    s32 x54;
    s32 x58;
} O;
typedef struct {
    s32 x0;
    s32 x4;
    s32 x8;
} P;

extern s32 data_02121de4[];
extern s32 data_02121dd8[];
extern s32 data_0211fb08[];
extern u8 *data_0213e434;

void func_02083bf0(O *o, s32 a) {
    volatile s32 t[2];
    P *p;
    s32 n;
    s32 v;

    if (a != data_02121de4[o->x50]) {
        return;
    }
    if (o->x54 >= 3) {
        return;
    }
    o->x58++;
    if (o->x58 <= data_02121dd8[o->x54]) {
        return;
    }
    o->x54++;
    o->x58 = 0;
    p      = (P *) (data_0213e434 + 0x2164);
    n      = p->x8 + 1;
    if (n >= 4) {
        return;
    }
    p->x8 = n;
    v     = data_0211fb08[p->x8] << 12;
    t[0]  = v;
    t[1]  = v;
    p->x4 = v;
}
