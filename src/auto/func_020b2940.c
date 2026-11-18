/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct {
    s32 x, y, z;
} Vec;
typedef struct {
    Vec pos;
    u8 pad[0x64 - 12];
    u8 dirty;
} S;
void func_020b2940(S *s, volatile Vec *v) {
    volatile s32 a0, a1, a2, b0, b1, b2;
    s32 t;
    int ne;
    if ((t = s->pos.x, a0 = t, v->x != t) || (t = s->pos.y, a1 = t, v->y != t) || (t = s->pos.z, a2 = t, v->z != t)) {
        ne = 1;
    } else {
        ne = 0;
    }
    if (ne == 0) {
        return;
    }
    t        = v->x;
    b0       = t;
    s->pos.x = t;
    t        = v->y;
    b1       = t;
    s->pos.y = t;
    t        = v->z;
    b2       = t;
    s->pos.z = t;
    s->dirty = 1;
}
