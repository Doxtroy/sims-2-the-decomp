/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct VObj02014e5c {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4(s32);
};

extern "C" void func_01ffb068(void *, s32, s32);

extern "C" void func_02014e5c(u8 *obj, s32 a, s32 b) {
    if (a == 0) {
        return;
    }
    if (b == 0) {
        return;
    }
    *(u32 *) (obj + 4) |= 4;
    func_01ffb068(obj + 0x68, a, b);
    ((VObj02014e5c *) obj)->f4(0);
}
