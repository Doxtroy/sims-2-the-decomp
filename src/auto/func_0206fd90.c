/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u8 pad0[0x14];
    s32 flags;
    u8 pad18[2];
    u8 x1a;
    u8 x1b;
    u8 pad1c[0x2C - 0x1C];
} Entry;

typedef struct {
    u8 pad0[0x21DC];
    Entry entries[1];
} Game;

typedef struct {
    u8 pad0[0x18];
    u16 x18;
} Item;

typedef struct {
    u8 pad0[0xA];
    u16 xa;
    u16 xc;
} Info;

typedef struct {
    s32 x0;
    s32 x4;
    s32 pad8[3];
    s32 x14;
} Sub;

typedef struct {
    u8 pad0[0xC];
    s32 xc;
    u8 pad10[0x18 - 0x10];
    s32 x18;
    u8 pad1c[0x24 - 0x1C];
    s32 x24;
    s32 x28;
    Item *items[(0xA8 - 0x2C) / 4];
    Sub *xa8;
} Obj;

extern Game *data_0213e434;

void func_02050390(void);
void func_02050448(void);
void func_02050b30(s32, s32, s32);
s32 func_02051338(s32, s32, s32, s32, s32);
s32 func_0205166c(s32, s32, s32, s32, s32, s32);
void func_02051a2c(s32);
void func_02051a50(s32, s32, s32);
s32 func_02052258(s32);
void func_02067698(s32, u16, u16);
s32 func_02082810(Entry *);
Info *func_0208afe8(s32);

void func_0206fd90(Obj *o) {
    Info *info;
    Entry *e;
    s32 h;
    s32 i;
    s32 j;
    s32 k;
    s32 f;
    s32 v;
    if (o->x24 < 0) {
        return;
    }
    o->x28 = o->items[o->x24]->x18;
    info   = func_0208afe8(o->x28);
    e      = &data_0213e434->entries[o->x28];
    func_02067698(o->xc, info->xa, info->xc);
    f = e->flags;
    if (f & 2) {
        v = (f & 4) ? 1 : 7;
        o->xa8->x4 |= 1;
        o->xa8->x14 = (o->xa8->x14 & ~0xF000) | ((v & 0xF) << 12);
    } else {
        o->xa8->x4 &= ~1;
    }
    for (i = 8; i < 0xB; i++) {
        func_02050b30(0x14, i, 0x1F);
    }
    for (j = 0xD; j < 0x10; j++) {
        func_02050b30(0x14, j, 0x1F);
    }
    for (k = 0x10; k < 0x17; k++) {
        func_02050b30(0xA, k, 0x1F);
    }
    h = func_02051338(o->x18, 0xCC, 0x48, func_02052258(e->x1a + 0xB8), 1);
    h = func_02051338(h, 0xCC, 0x6F, func_02052258(e->x1b + (e->x1a * 7 + 0xC0)), 1);
    func_02050448();
    func_02051a50(3, 0, -1);
    func_02051a2c(0xD);
    h = func_0205166c(h, 0x53, 0x83, 0x9D, func_02082810(e), 0);
    func_0205166c(h, 0x53, 0x90, 0x9D, func_02052258(o->x28 + 0x185), 0);
    func_02050390();
}
