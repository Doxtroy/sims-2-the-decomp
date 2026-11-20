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
    Vec2 &operator=(const Vec2 &b) {
        x = b.x;
        y = b.y;
        return *this;
    }
};

struct Spr {
    u8 pad[0x50];
    Vec2 pos;
};

struct Ent {
    Spr *spr;
    Vec2 pos;
    u8 active;
    u8 pad[7];
};

struct Obj {
    u8 pad[0xc4];
    Ent a[10];
    Ent b[10];
    u8 pad2[0x2dc - 0x254];
    s32 f2dc;
};

extern "C" void func_020168a4(void *, s32);
extern "C" void func_02008804(void *);

extern "C" void func_020088e8(Obj *o) {
    u8 i;
    for (i = 0; i < 10; i++) {
        o->a[i].active = 0;
        if (o->a[i].spr != 0) {
            func_020168a4(o->a[i].spr, 1);
            o->a[i].spr->pos.x = o->a[i].pos.x;
            o->a[i].spr->pos.y = o->a[i].pos.y;
        }
        o->b[i].active = 0;
        if (o->b[i].spr != 0) {
            func_020168a4(o->b[i].spr, 1);
            o->b[i].spr->pos.x = o->b[i].pos.x;
            o->b[i].spr->pos.y = o->b[i].pos.y;
        }
    }
    o->f2dc = -1;
    func_02008804(o);
}
