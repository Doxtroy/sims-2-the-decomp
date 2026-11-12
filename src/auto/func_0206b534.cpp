/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct V {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual void f7();
};
struct L {
    V *a;
    V *b;
};
struct S {
    u8 pad0[0x44];
    V *a[5];
    V *b;
    V *c[4];
    V *d[4];
};

extern "C" {
void func_0200fb30(...);
void func_0203c3a4(...);
void func_0203d078(...);
void *func_0204561c(...);
void func_02046844(...);
extern void *data_0213e580;

void func_0206b534(void *arg0) {
    S *s;
    s32 i;
    s32 j;
    L *l;
    V *o;
    V *p;
    s32 z;

    s = (S *) arg0;
    for (i = 0; i < 5; i++) {
        o = s->a[i];
        if (o != NULL) {
            o->f1();
        }
    }
    o = s->b;
    if (o != NULL) {
        o->f1();
    }
    for (j = 0; j < 4; j++) {
        o = s->c[j];
        if (o != NULL) {
            o->f1();
        }
        o = s->d[j];
        if (o != NULL) {
            o->f1();
        }
    }
    l = (L *) func_0204561c((u8 *) arg0 + 0x298);
    while (l != NULL) {
        u8 *e = *(u8 **) l;
        if (e != NULL) {
            p = *(V **) (e + 0x10);
            if (p != NULL) {
                if (p != NULL) {
                    p->f1();
                }
            }
            func_02046844(e);
        }
        l = *(L **) ((u8 *) l + 4);
    }
    func_0203c3a4(3, 0, 0);
    func_0203d078(3);
    if (*(u8 *) ((u8 *) arg0 + 0x31c) != 0) {
        if (*(s32 *) ((u8 *) data_0213e580 + 0xf8) != 0) {
            *(u8 *) ((u8 *) arg0 + 0x31c) = (z = 0);
            func_0200fb30(*(s32 *) ((u8 *) data_0213e580 + 0xf8), *(u8 *) ((u8 *) arg0 + 0x31c), z);
        }
    }
    ((V *) ((u8 *) arg0 + 0x298))->f7();
}
}
