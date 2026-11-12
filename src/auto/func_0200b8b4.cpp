/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct VD {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual s32 f3(s32 b, s32 c, s32 d);
    virtual s32 f4(s32 a);
};
extern "C" {
void func_0200b708(void *, s32, s32, s32, s32, s32);

void func_0200b8b4(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 a4, s32 a5) {
    void *r5;
    if (arg1 == -1) {
        r5 = *(void **) ((u8 *) arg0 + 0xC);
    } else {
        r5 = ((void **) *(void **) ((u8 *) arg0 + 8))[arg1];
    }
    if (r5 != NULL) {
        if (((VD *) r5)->f4(a4) == 0) {
            return;
        }
        ((VD *) r5)->f3(arg3, a4, a5);
        return;
    }
    func_0200b708(arg0, arg1, arg3, arg2, a4, a5);
}
}
