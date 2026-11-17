/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct VObj0201cbc0 {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3(s32);
};
extern "C" void func_02018734(void *, void *, void *);
extern "C" void func_02018ad0(void *);
extern "C" void func_02018aa0(void *, s32);
extern u8 data_021303dc[];

extern "C" u8 *func_0201cbc0(u8 *obj, u8 *params) {
    u8 *sub;
    func_02018734(obj, params, obj + 0x18);
    sub            = obj + 0x18;
    *(void **) obj = data_021303dc;
    func_02018ad0(sub);
    func_02018aa0(sub, 0x36);
    *(s32 *) (sub + 0x10) = 0;
    *(s32 *) (sub + 0x14) = 0;
    *(u8 *) (sub + 0x18)  = 1;
    *(u16 *) (obj + 0x10) = 0x36;
    ((VObj0201cbc0 *) obj)->f3(*(s32 *) (params + 4));

    return obj;
}
