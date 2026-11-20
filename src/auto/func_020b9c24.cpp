/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct Fx32 {
    s32 v;
    Fx32() {}
    Fx32(s32 x) :
        v(x) {}
    Fx32 &operator=(Fx32 b) {
        v = b.v;
        return *this;
    }
    bool operator!=(Fx32 b) const {
        return v != b.v;
    }
};

struct Vec3s {
    s16 x, y, z;
};

struct Vec3 {
    Fx32 x, y, z;
    Vec3() {}
    Vec3 &operator=(const Vec3 &b) {
        x.v = b.x.v;
        y   = b.y;
        z   = b.z;
        return *this;
    }
};

struct Obj {
    Vec3 pos;
    u8 pad0c[0x64 - 0x0c];
    u8 dirty;
    u8 pad65[0x264 - 0x65];
    s32 state;
    u8 pad268[0x2a4 - 0x268];
    Fx32 speed;
    u8 pad2a8[0x2b4 - 0x2a8];
    Vec3s *target;
    u8 pad2b8[0x2bd - 0x2b8];
    u8 mode;
    u8 count;
};

extern "C" void func_020b9c24(Obj *o, Vec3s *v, u8 mode, Fx32 speed) {
    o->state  = 7;
    o->target = v;
    o->mode   = mode;
    o->speed  = speed;
    o->count  = 0;
    Vec3 t;
    t.x.v        = v->x << 12;
    t.y.v        = v->y << 12;
    t.z.v        = v->z << 12;
    bool changed = false;
    if (t.x != o->pos.x || t.y != o->pos.y || t.z != o->pos.z) {
        changed = true;
    }
    if (changed) {
        o->pos   = t;
        o->dirty = 1;
    }
    o->count++;
}
