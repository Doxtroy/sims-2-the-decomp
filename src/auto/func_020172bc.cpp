/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct Fx32 {
    s32 v;
    Fx32() {}
    Fx32(s32 x) :
        v(x) {}
    Fx32 operator*(Fx32 b) const {
        return Fx32((s32) (((s64) v * b.v + 0x800) >> 12));
    }
};

struct VC0 {
    virtual void f0();
    virtual M2C_UNK f1();
};

struct Sq {
    void *vt;
    s32 ref;
    Fx32 v;
};

struct Obj {
    u8 pad[0x74];
    Sq *sq;
};

extern "C" void *func_0204688c(s32, s32, s32);
extern "C" u8 data_0212ff9c;
extern "C" u8 data_0212ff3c;

static inline void InitSq(Sq *s, Fx32 x) {
    s->vt  = &data_0212ff9c;
    s->ref = 1;
    s->vt  = &data_0212ff3c;
    s->v   = x * x;
}

extern "C" void func_020172bc(Obj *o, Fx32 a) {
    Sq *p = o->sq;
    if (p != NULL) {
        p->ref--;
        if (p->ref == 0 && p != NULL) {
            ((VC0 *) p)->f1();
        }
    }
    Sq *n = (Sq *) func_0204688c(0xc, 0, 4);
    if (n != NULL) {
        InitSq(n, a);
    }
    o->sq = n;
}
