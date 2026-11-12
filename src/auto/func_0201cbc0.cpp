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
void func_02018aa0(...);
void func_02018ad0(...);
extern u8 data_021303dc;

void *func_0201cbc0(void *arg0, void *arg1) {
    u8 *self = (u8 *) arg0;
    u8 *t;
    func_02018734(self, arg1, self + 0x18);
    t             = self + 0x18;
    *(u8 **) self = &data_021303dc;
    func_02018ad0(t);
    func_02018aa0(t, 0x36);
    *(s32 *) (t + 0x10)    = 0;
    *(s32 *) (t + 0x14)    = 0;
    *(s8 *) (t + 0x18)     = 1;
    *(s16 *) (self + 0x10) = 0x36;
    ((VA *) self)->f3(*(s32 *) ((u8 *) arg1 + 4));
    return self;
}
}
