/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct V3 {
    s32 x, y, z;
} V3;
typedef struct M33 {
    s32 m[4][3];
} M33;
typedef struct O {
    V3 pos;
    V3 rot;
    V3 scale;
    M33 m;
    V3 prev;
    s32 x60;
    u8 dirty;
} O;
void func_020f57b4(M33 *);
void func_020f5b94(M33 *, M33 *, s32, s32, s32);
void func_01ffba84(M33 *, V3 *);
void func_01ffb98c(V3 *, M33 *, void *);
void func_0200c660(u8 *out, s32 unused, u8 *b, O *o) {
    volatile s32 t[2];
    V3 r;
    if (o->dirty == 1) {
        o->dirty = 0;
        func_020f57b4(&o->m);
        {
            V3 *sc = &o->scale;
            func_020f5b94(&o->m, &o->m, sc->x, sc->y, sc->z);
        }
        func_01ffba84(&o->m, &o->rot);
        o->prev.x = o->pos.x;
        o->prev.y = o->pos.y;
        o->prev.z = o->pos.z;
    }
    func_01ffb98c(&r, &o->m, b + 4);
    *(s32 *) (out + 4)   = r.x;
    t[0]                 = r.y;
    *(s32 *) (out + 8)   = r.y;
    t[1]                 = r.z;
    *(s32 *) (out + 0xc) = r.z;
}
