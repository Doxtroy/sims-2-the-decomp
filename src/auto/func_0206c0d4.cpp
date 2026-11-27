/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct V {
    virtual s32 f0();
    virtual void f1();
    virtual void f2();
    virtual void f3(s32);
};

struct T {
    u8 pad[0x40];
    V *arr[13];
    s32 idx;
    u8 pad2[0xe0 - 0x78];
    s32 xe0;
};

struct O {
    u8 pad[0xa];
    u16 xa;
    u8 pad2[0x90 - 0xc];
    T *x90;
    u8 x94;
};

extern "C" {
void func_020d59bc(s32);
s32 func_020187ec(void *);
s32 func_02066728(V *);
void func_0206c73c(T *);
extern u8 *data_0213e580;
extern u8 *data_0213e434;

void func_0206c0d4(O *o) {
    if (o->x94 == 0) {
        return;
    }
    func_020d59bc(0x16a);
    if (o->xa == 0) {
        T *t = o->x90;
        if (t->idx > -1) {
            if (func_020187ec(*(u8 **) (data_0213e580 + 0xf8) + 0xe0) != 7) {
                return;
            }
            t->arr[t->idx]->f3(t->idx);
        } else {
            V *v = *(V **) (data_0213e434 + t->xe0 * 4 + 0x4670);
            if (func_02066728(v) == 0) {
                return;
            }
            if (v->f0() == 0) {
                return;
            }
            if (func_020187ec(*(u8 **) (data_0213e580 + 0xf8) + 0xe0) != 7) {
                return;
            }
            v->f1();
        }
    } else {
        func_0206c73c(o->x90);
    }
}
}
