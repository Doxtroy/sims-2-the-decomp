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
};

struct Vec3 {
    Fx32 x, y, z;
    Vec3() {}
    Vec3(const Fx32 &ax, const Fx32 &ay, const Fx32 &az) :
        x(ax),
        y(ay),
        z(az) {}
    Vec3 &operator=(const Vec3 &b) {
        x = b.x;
        y = b.y;
        z = b.z;
        return *this;
    }
};

struct Msg {
    u8 base[0x10];
    s32 f10;
    u8 pad14[0x30 - 0x14];
    u16 h30;
    u8 pad32[0x3c - 0x32];
};

struct Obj {
    u8 base[0x10];
    Vec3 pos;
    s32 f1c;
    s32 f20;
    Fx32 a;
    Fx32 b;
    u16 h2c;
    u8 c2e;
    u8 c2f;
    u8 c30;
    u8 c31;
    u8 c32;
    u8 c33;
    u8 pad[4];
};

struct Ent {
    u8 pad[0x78];
    Vec3 pos;
};

struct Self {
    u8 pad0[4];
    u8 *owner;
    u8 pad8[0x44 - 0x8];
    Ent *ent;
};

extern "C" {
Ent *func_020870dc(void *, void *, s32, s32);
void func_01ffac40(void *, void *);
void func_0201d124(Msg *);
void func_0201ca08(Obj *);
void func_020117e8(void *, s32, void *, void *);
void func_02018acc(void *);
extern void *data_0213e580;

void func_02025f04(Self *s) {
    Msg m;
    Obj o;

    s->ent = func_020870dc(data_0213e580, s->owner, 0xB, -1);
    if (s->ent == 0) {
        return;
    }
    func_01ffac40(s->owner + 0xE0, s);
    func_0201d124(&m);
    m.h30 = 0x55;
    m.f10 = 0x246;
    func_020117e8(s->owner, 3, &m, s);
    func_0201ca08(&o);
    o.pos = s->ent->pos;
    o.a   = Fx32(0xC000);
    func_020117e8(s->owner, 0x1B, &o, s);
    func_02018acc(&o);
    func_02018acc(&m);
}
}
