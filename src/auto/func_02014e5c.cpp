/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct VA {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4(s32);
};
extern "C" {
void func_01ffb068(void *, s32, s32);
void func_02014e5c(void *arg0, s32 arg1, s32 arg2) {
    u8 *p = (u8 *) arg0;
    if (arg1 == 0) {
        return;
    }
    if (arg2 == 0) {
        return;
    }
    *(u32 *) (p + 4) |= 4;
    func_01ffb068(p + 0x68, arg1, arg2);
    ((VA *) arg0)->f4(0);
}
}
