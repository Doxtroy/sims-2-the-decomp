/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct VObj02030c94 {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3(s32);
};
extern "C" void func_02018734(void *, void *, void *);
extern "C" void func_02018ad0(void *);
extern "C" void func_02018aa0(void *, s32);
extern u8 data_0213134c[];
extern "C" u8 func_0204cbb4(s32, s32);
extern "C" u8 *func_02030c94(u8 *obj, u8 *params) {
    u8 *sub;
    func_02018734(obj, params, obj + 0x18);
    sub            = obj + 0x18;
    *(void **) obj = data_0213134c;
    func_02018ad0(sub);
    func_02018aa0(sub, 0x40);

    *(u16 *) (obj + 0x10) = 0x40;
    ((VObj02030c94 *) obj)->f3(*(s32 *) (params + 4));
    obj[0x28]             = 0;
    obj[0x29]             = 0;
    *(s32 *) (obj + 0x2C) = 0;
    obj[0x30]             = 0;
    obj[0x31]             = func_0204cbb4(0, 4);
    *(s32 *) (obj + 0x34) = 0;
    return obj;
}
