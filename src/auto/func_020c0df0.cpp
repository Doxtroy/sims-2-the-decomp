/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 v;
} W;
struct VA {
    virtual void f0();
    virtual void f1();
    virtual s32 f2(void *a, W b, W c);
};
extern "C" {
void func_02016708(void *, void *);
void func_020bf4b4(s32);
void func_020d59bc(s32);
extern u8 data_02127894;

void func_020c0df0(u8 *arg0) {
    VA *o;
    u8 *r4;

    if (arg0[0x94] == 0) {
        return;
    }
    *(s32 *) (arg0 + 0x14) = (*(s32 *) (arg0 + 0x14) & ~0xF000) | 0xD000;
    func_02016708(arg0, &data_02127894);
    o = *(VA **) (arg0 + 0x74);
    if (o->f2(arg0, *(W *) (arg0 + 0x80), *(W *) (arg0 + 0x84)) == 0) {
        return;
    }
    r4 = *(u8 **) (arg0 + 0x90);
    func_020d59bc(0x173);
    func_020bf4b4(*(s32 *) (r4 + 0x11C));
}
}
