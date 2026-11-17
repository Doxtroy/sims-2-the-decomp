/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct VObj0202c0f8 {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3(s32);
};

extern "C" void func_02018734(void *, void *, void *);
extern "C" void func_02018ad0(void *);
extern "C" void func_02018aa0(void *, s32);
extern u8 data_02130e7c[];

extern "C" u8 *func_0202c0f8(u8 *obj, u8 *params) {
    u8 *sub;
    func_02018734(obj, params, obj + 0x18);
    sub            = obj + 0x18;
    *(void **) obj = data_02130e7c;
    func_02018ad0(sub);
    func_02018aa0(sub, 0x1F);
    *(u16 *) (obj + 0x10) = 0x1F;
    ((VObj0202c0f8 *) obj)->f3(*(s32 *) (params + 4));
    *(s32 *) (obj + 0x28) = -1;
    return obj;
}
