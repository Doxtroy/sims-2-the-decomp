/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct Fx32 {
    s32 v;
    Fx32() {}
    Fx32(s32 x) :
        v(x) {}
    Fx32 operator-() const {
        return Fx32(-v);
    }
    bool operator<(Fx32 b) const {
        return v < b.v;
    }
    bool operator>(Fx32 b) const {
        return v > b.v;
    }
    bool operator>=(const Fx32 &b) const {
        return v >= b.v;
    }
    bool operator<=(Fx32 b) const {
        return v <= b.v;
    }
    bool operator<(const Fx32 *b) const {
        return v < b->v;
    }
};

struct Vec3 {
    Fx32 x, y, z;
    Vec3() {}
    Vec3(const Fx32 &ax, const Fx32 &ay, const Fx32 &az) :
        x(ax),
        y(ay),
        z(az) {}
};

struct Tri {
    u8 pad[0xc];
    Vec3 n;
};

struct Hit {
    Tri *tri;
    s32 f4;
    Fx32 dist;
};

struct Res {
    s32 f0;
    s32 f4;
    s32 f8;
    s32 fc;
    Fx32 f10;
    s32 f14;
    Fx32 Y() const {
        return f10;
    }
};

extern "C" {
void func_01ffc54c(void *a, void *b, const Vec3 *dir, Hit *hit);
}
extern "C" Fx32 func_020da048(void *b, const Vec3 *n);
extern "C" Res func_020da808(void *a, const Vec3 *v);

extern "C" Fx32 func_020d9c08(void *a, void *b, void *c, Fx32 minY, Fx32 len) {
    Hit hit;
    Vec3 dir(Fx32(0), -len, Fx32(0));
    func_01ffc54c(c, b, &dir, &hit);
    if (hit.dist < Fx32(0x2000)) {
        Fx32 y = func_020da048(b, &hit.tri->n);
        Fx32 f = func_020da808(a, &Vec3(Fx32(0), y, Fx32(0))).Y();
        if (f <= Fx32(0x1000) || hit.tri->n.y < &minY) {
            return Fx32(0);
        }
        return y;
    }
    return Fx32(0);
}
