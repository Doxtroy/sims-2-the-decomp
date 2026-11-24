/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct W {
    s32 v;
};

struct Obj;

struct Iface {
    virtual void f0();
    virtual void f4();
    virtual int Test(Obj *o, W a, W b);
};

struct Inner {
    u8 pad[0x6c];
    s32 state;
};

struct Holder {
    u8 pad[0xc];
    Inner *inner;
};

struct Obj {
    u8 pad0[4];
    u32 flags;
    u8 pad8[0xc];
    u32 f14;
    u8 pad18[0x5c];
    Iface *iface;
    u8 pad78[8];
    W a;
    W b;
    u8 pad88[8];
    Holder *holder;
    u8 f94;
    u8 f95;
};

extern "C" {
extern char data_0211f8e8[];
extern char data_0211f8e0[];
void func_02016708(Obj *o, const char *s);
void func_020d59bc(s32 id);

void func_0206be9c(Obj *o) {
    if (o->f94 != 0) {
        return;
    }
    if (o->holder->inner->state == 2) {
        return;
    }
    if (o->iface->Test(o, o->a, o->b)) {
        if (o->f95 != 0) {
            return;
        }
        o->f95 = 1;
        o->f14 = (o->f14 & ~0xf000) | 0x2000;
        func_02016708(o, data_0211f8e8);
        if ((o->flags & 1) == 1) {
            func_020d59bc(0x161);
        }
    } else {
        if (o->f95 == 0) {
            return;
        }
        o->f95 = 0;
        o->f14 = (o->f14 & ~0xf000) | 0x1000;
        func_02016708(o, data_0211f8e0);
    }
}
}
