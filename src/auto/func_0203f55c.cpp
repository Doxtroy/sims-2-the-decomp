/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct Fx32 {
    s32 v;
    Fx32() {}
    Fx32(s32 x) :
        v(x) {}
    Fx32 operator+(Fx32 b) const {
        return Fx32(v + b.v);
    }
    Fx32 operator-() const {
        return Fx32(-v);
    }
    Fx32 &operator=(Fx32 b) {
        v = b.v;
        return *this;
    }
    bool operator!=(Fx32 b) const {
        return v != b.v;
    }
    bool operator>=(Fx32 b) const {
        return v >= b.v;
    }
    bool operator<=(Fx32 b) const {
        return v <= b.v;
    }
};

struct Obj {
    u8 pad[0xc];
    Fx32 val;
    Fx32 vel;
    u8 on;
};

extern "C" void func_0203f628(Obj *, Fx32, s32);

extern "C" void func_0203f55c(Obj *o) {
    if (!o->on) {
        return;
    }
    if (o->vel != Fx32(0)) {
        Fx32 v = o->val + o->vel;
        if (v >= Fx32(0x1000)) {
            v      = Fx32(0x1000);
            o->vel = -o->vel;
        } else if (v <= Fx32(0)) {
            v      = Fx32(0);
            o->vel = -o->vel;
        }
        func_0203f628(o, v, 1);
    }
}
