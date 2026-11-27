/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct Msg1 {
    u8 pad[0x1c];
};

struct Msg2 {
    u8 pad0[0x10];
    s32 f10;
    u8 pad14[0x30 - 0x14];
    s16 f30;
    u8 pad32[0x3c - 0x32];
};

struct Msg3 {
    u8 pad0[0x10];
    void *f10;
    u8 pad14[4];
    void *f18;
    s16 f1c;
    u8 pad1e[0x2c - 0x1e];
    s32 f2c;
    s16 f30;
    u8 pad32[0x4c - 0x32];
};

struct Inner {
    u8 pad[0xa];
    u16 fa;
    u8 padc[0x130 - 0xc];
    s32 f130;
};

struct Obj {
    virtual void f0();
    virtual void f1();
    Inner *f4;
};

extern "C" {
extern u8 *data_0213e434;
extern u8 *data_0213e580;
extern s32 data_02139fa4;

void func_02083dc8(u8 *a, u16 b);
void func_02026be8(Msg1 *m);
void func_0201d124(Msg2 *m);
void func_020269b4(Msg3 *m);
void func_020117e8(s32 a, s32 b, void *m, s32 c);
void func_02018acc(void *m);
void func_0205871c(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);

s32 func_0208e9d4(Obj *o) {
    u8 *g = data_0213e434;
    if (*(s32 *) (g + 0x215c) < 6) {
        s32 h;
        Msg1 a;
        Msg2 b;
        Msg3 c;
        h = *(s32 *) (data_0213e580 + 0xf8);
        func_02083dc8(g + 0x18, o->f4->fa);
        func_02026be8(&a);
        func_020117e8(h, 0x26, &a, 0);
        func_0201d124(&b);
        b.f30 = 0x51;
        b.f10 = 0x16d;
        func_020117e8(h, 3, &b, 0);
        func_020269b4(&c);
        c.f30 = 0x50;
        c.f10 = o->f4;
        c.f1c = 0x13;
        c.f18 = o->f4;
        c.f2c = 0;
        func_020117e8(h, 8, &c, 0);
        o->f4->f130 = 0;
        if (o != 0) {
            o->f1();
        }
        func_02018acc(&c);
        func_02018acc(&b);
        func_02018acc(&a);
        return 6;
    }
    func_0205871c(data_02139fa4, 0x98b, -1, 0, 0, 1);
    return 0;
}
}
