/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 a, b, c;
} S12;

typedef struct {
    u8 pad0[0x8];
    s32 f8;
    u8 pad1[0x24 - 0xc];
    void *p24;
    u8 pad2[0x8c0 - 0x28];
    s32 f8c0;
    u8 pad3[0x93c - 0x8c4];
    void *p93c;
    u8 pad4[0x94c - 0x940];
    void *p94c;
    u8 pad5[0x954 - 0x950];
    void *p954;
    u8 pad6[0x9dc - 0x958];
    void *p9dc;
    void *p9e0;
    u8 pad7[0xa34 - 0x9e4];
    void *pa34[2];
    u8 pad8[0xa52 - 0xa3c];
    u8 flags;
    u8 pad9[0xa5d - 0xa53];
    u8 ba5d;
    u8 ba5e;
} Obj;

void func_020ab484(Obj *);
void func_0203c540(void);
void func_02046a58(void *);
void func_02046844(void *);
void func_0204681c(void *);
void func_0203d674(void *);
void func_021023e8(s32);
void func_020d5dbc(u8);
void func_020d5d44(u8);
void func_020d5e34(s32);
void func_020d5f80(S12 *);
void func_020d5cb8(S12);

void func_020a4528(Obj *o) {
    void *p;
    s32 i;
    S12 s;

    if (!(o->flags & 0x20)) {
        o->flags |= 1;
    }
    func_020ab484(o);
    func_0203c540();
    p = o->p24;
    if (p != NULL) {
        func_02046a58(p);
        func_02046844(p);
    }
    if (o->f8c0 == 0) {
        if (o->f8 == 0) {
            func_0204681c(o->p9dc);
            func_0204681c(o->p9e0);
            for (i = 0; i < 2; i++) {
                func_0204681c(o->pa34[i]);
            }
            func_0204681c(o->p94c);
        }
        p = o->p93c;
        if (p != NULL) {
            func_0203d674(p);
            func_02046844(p);
        }
        func_0204681c(o->p954);
    }
    func_021023e8(0);
    func_020d5dbc(o->ba5d);
    func_020d5d44(o->ba5e);
    func_020d5e34(0x10);
    func_020d5f80(&s);
    func_020d5cb8(s);
}
