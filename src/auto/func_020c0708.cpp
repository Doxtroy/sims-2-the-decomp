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

struct Vec2 {
    Fx32 x, y;
    Vec2() {}
    Vec2(const Fx32 &ax, const Fx32 &ay) :
        x(ax),
        y(ay) {}
    Vec2 &operator=(const Vec2 &b) {
        x = b.x;
        y = b.y;
        return *this;
    }
};

struct Data {
    s32 unk0;
    s32 unk4;
    u16 unk6;
};

struct Sub {
    s32 unk0;
    u32 unk4;
};

struct Obj {
    u8 pad0[4];
    u32 unk4;
    u8 pad8[0xc];
    u32 unk14;
    u8 pad18[8];
    u16 *unk20;
    u8 pad24[0x2c];
    Vec2 unk50;
    u8 pad58[0x28];
    Vec2 unk80;
    u8 pad88[0xc];
    u32 unk94;
    u8 pad98[0x94];
    Sub *unk12c;
    u8 pad130[0x14];
    Vec2 unk144;
    u8 pad14c[0x18];
    u32 unk164;
    u8 pad168[3];
    u8 unk16b;
};

extern "C" {
extern u8 data_02127884[];
void func_02016708(void *, void *);
u8 *func_0204456c(u16);
s32 func_020d59bc(s32);

void func_020c0708(Obj *o) {
    o->unk16b = 1;
    o->unk144 = Vec2(Fx32(0), Fx32(0));
    o->unk50  = Vec2(o->unk80.x, o->unk80.y);
    o->unk94 &= ~1;
    o->unk12c->unk4 &= ~1;
    o->unk4 |= 1;
    func_02016708(o, data_02127884);
    o->unk4 |= 0x10;
    o->unk14 &= ~0xc00;
    o->unk164 = *(u16 *) (func_0204456c(o->unk20[1]) + 6);
    func_020d59bc(0x175);
}
}
