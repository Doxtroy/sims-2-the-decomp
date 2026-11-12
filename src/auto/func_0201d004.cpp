/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct VA {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3(s32 a);
};

extern "C" {
void func_02018734(...);
void func_0201d124(...);
extern u8 data_02130428;

void *func_0201d004(void *arg0, void *arg1) {
    u8 *self = (u8 *) arg0;
    func_02018734(self, arg1, self + 0x18);
    *(u8 **) self = &data_02130428;
    func_0201d124(self + 0x18);
    *(s16 *) (self + 0x10) = 3;
    ((VA *) self)->f3(*(s32 *) ((u8 *) arg1 + 4));
    if (*(s32 *) (self + 0x38) == 0) {
        *(s32 *) (self + 0x38) = *(s32 *) (self + 4);
    }
    return self;
}
}
