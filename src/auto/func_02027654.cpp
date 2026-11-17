/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct VObj02027654 {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3(s32);
};
extern "C" void func_02018734(void *, void *, void *);
extern "C" void func_02018ad0(void *);
extern "C" void func_02018aa0(void *, s32);
extern u8 data_02130984[];

extern "C" u8 *func_02027654(u8 *obj, u8 *params) {
    u8 *sub;
    func_02018734(obj, params, obj + 0x18);
    sub            = obj + 0x18;
    *(void **) obj = data_02130984;
    func_02018ad0(sub);
    func_02018aa0(sub, 0x21);
    *(s32 *) (sub + 0x10) = 0;
    *(u16 *) (sub + 0x14) = 0x60;
    *(s32 *) (sub + 0x18) = 0;
    *(u16 *) (obj + 0x10) = 0x21;
    ((VObj02027654 *) obj)->f3(*(s32 *) (params + 4));

    return obj;
}
