/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct V2 {
    s32 x;
    s32 y;
} V2;
void func_020ae150(V2 *v, s32 *s) {
    volatile s32 t[6];
    s32 k = *s;
    s32 x, y;
    t[5] = k;
    t[3] = k;
    t[4] = k;
    x    = (s32) (((s64) v->x * k + 0x800) >> 12);
    t[0] = x;
    y    = (s32) (((s64) v->y * k + 0x800) >> 12);
    t[1] = y;
    v->x = x;
    y    = t[1];
    t[2] = y;
    v->y = y;
}
