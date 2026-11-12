/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct VA {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3(s32 a);
};
extern "C" {
extern u8 data_02130218;
void func_02018734(...);
void func_02018aa0(...);
void func_02018ad0(...);
void *func_02019618(void *arg0, void *arg1) {
    u8 *obj;
    u8 *t4;
    obj = (u8 *) arg0;
    func_02018734(arg0, arg1, obj + 0x18);
    t4           = obj + 0x18;
    *(u8 **) obj = &data_02130218;
    func_02018ad0(t4);
    func_02018aa0(t4, 0x1E);
    *(s32 *) (t4 + 0x10)  = 0;
    *(u8 *) (t4 + 0x14)   = 0;
    *(s16 *) (obj + 0x10) = 0x1E;
    ((VA *) obj)->f3(*(s32 *) ((u8 *) arg1 + 4));
    return arg0;
}
}
