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
    bool operator>(const Fx32 &b) const {
        return v > b.v;
    }
    bool operator<(Fx32 b) const {
        return v < b.v;
    }
};

struct Info {
    u8 pad[4];
    u16 h4;
};

struct Thing {
    Fx32 x;
    u8 pad4[4];
    Info *info;
};

struct Flags {
    u16 b0 : 3;
    u16 neg : 1;
    u16 rest : 12;
};

struct Obj {
    u8 pad[0x6c];
    Thing *thing;
    u8 pad70[0xa8 - 0x70];
    Fx32 ofs;
    Flags f;
};

extern "C" Fx32 data_027e1124;

static inline Fx32 GetX(Thing *t) {
    if (t) {
        return t->x;
    }
    return data_027e1124;
}

extern "C" s32 func_020b9278(Obj *o) {
    if (o->thing == NULL) {
        return 0;
    }
    Fx32 v = o->ofs;
    if (o->f.neg == 1) {
        v = -v;
    }
    Fx32 pos = GetX(o->thing) + v;
    if (!(pos > data_027e1124) || !(pos < Fx32(o->thing->info->h4 << 12))) {
        return 1;
    }
    return 0;
}
