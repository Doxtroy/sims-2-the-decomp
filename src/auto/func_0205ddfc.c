/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct {
    u32 w[4];
} Q;
typedef struct {
    u8 x, y;
} P;
typedef struct Src {
    u32 a;
    Q v;
    u8 b0, b1, b2, b3;
    u32 c;
    u16 d;
    u8 e0, e1;
    u32 f;
} Src;
typedef struct Obj {
    void *vt;
    u8 pad[0x20];
    u8 k;
    u8 pad2[3];
    u32 a;
    Q v;
    u8 b0, b1, b2, b3;
    u32 c;
    u16 d;
    u8 e0, e1;
    u32 f;
} Obj;
extern u8 data_02131f08[];
void func_02046b24(void *, s32, s32, s32, s32);
void func_02046384(void *, s32, s32);
Obj *func_0205ddfc(Obj *o, Src *s, s32 k, s32 x) {
    func_02046b24(o, 8, (s32) s, k, x);
    o->vt     = data_02131f08;
    o->a      = 0x80000000;
    o->c      = 0;
    o->d      = 0;
    o->e0     = 1;
    o->e1     = 0;
    o->f      = 0x47;
    o->v.w[0] = 0;
    o->v.w[1] = 0;
    o->v.w[2] = 0;
    o->v.w[3] = 0;
    o->b1     = 0;
    o->b0     = 0;
    o->b2     = 0;
    o->b3     = 0;
    if (s != 0) {
        o->a          = s->a;
        o->v          = s->v;
        *(P *) &o->b0 = *(P *) &s->b0;
        *(P *) &o->b2 = *(P *) &s->b2;
        o->c          = s->c;
        o->d          = s->d;
        o->e0         = s->e0;
        o->e1         = s->e1;
        o->f          = s->f;
    } else {
        func_02046384(&o->a, 0, 0x24);
        o->e0 = 0;
    }
    o->k = k;
    return o;
}
