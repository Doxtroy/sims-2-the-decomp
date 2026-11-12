/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct VA {
    virtual void f0();
    virtual void f1();
};
extern "C" {
M2C_UNK func_0203f878(void *);
M2C_UNK func_020444f8(s32);
M2C_UNK func_02046844(void *);
M2C_UNK func_02046a58(void *);
M2C_UNK func_0204ef60(void *);
extern u8 data_ov000_0214ebd8[];
void func_ov000_0214dba0(u8 *arg0) {
    u8 *self = arg0;
    u32 i;
    s32 j;
    VA *o;
    void *t;
    u8 *e;
    u8 *q;
    func_0204ef60(self);
    e = self + 0x28;
    for (i = 0; i < 3; i++, e += 0x10) {
        if (e[0xe] != 5) {
            o = *(VA **) e;
            if (o != 0) {
                if (o != 0) {
                    o->f1();
                }
                *(VA **) e = 0;
            }
            if (*(void **) (e + 4) != 0) {
                func_020444f8(*(u16 *) (data_ov000_0214ebd8 + (e[0xe] << 5) + 0x18));
                t = *(void **) (e + 4);
                if (t != 0) {
                    func_0203f878(t);
                    func_02046844(t);
                }
                *(void **) (e + 4) = 0;
            }
            if (*(void **) (e + 8) != 0) {
                func_020444f8(*(u16 *) (data_ov000_0214ebd8 + (e[0xe] << 5) + 6));
                *(void **) (e + 8) = 0;
            }
            e[0xe] = 5;
        }
    }
    q = self;
    for (j = 0; j < 8; j++, q += 0x18) {
        o = *(VA **) (q + 0x58);
        if (o != 0) {
            if (o != 0) {
                o->f1();
            }
        }
    }
    func_020444f8(0x221);
    func_020444f8(0x13a3);
    func_020444f8(0x25);
    t = *(void **) (self + 0xc000 + 0x9e4);
    if (t != 0) {
        func_0203f878(t);
        func_02046844(t);
    }
    t = *(void **) (self + 0x24);
    if (t != 0) {
        func_02046a58(t);
        func_02046844(t);
    }
    o = *(VA **) (self + 0xc000 + 0x9e8);
    if (o != 0) {
        o->f1();
    }
    o = *(VA **) (self + 0xc000 + 0xa38);
    if (o == 0) {
        return;
    }
    if (o == 0) {
        return;
    }
    o->f1();
}
}
