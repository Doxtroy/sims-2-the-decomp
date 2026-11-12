/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct {
    s32 v;
} W;
struct VB {
    virtual void f0();
    virtual void f1();
    virtual s32 f2(void *a, W b, W c);
};

extern "C" {
u8 data_0212787c[];
s32 func_02016708(void *, void *);

void func_020c0e74(u8 *arg0) {
    s32 t;
    if (arg0[0x94] == 0) {
        return;
    }
    t                      = ((VB *) *(void **) (arg0 + 0x74))->f2(arg0, *(W *) (arg0 + 0x80), *(W *) (arg0 + 0x84));
    *(s32 *) (arg0 + 0x14) = (*(s32 *) (arg0 + 0x14) & ~0xF000) | (((t + 0xD) & 0xF) << 0xC);
    func_02016708(arg0, data_0212787c + ((t + 3) * 8));
}
}
