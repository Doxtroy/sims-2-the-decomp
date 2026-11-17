/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct VObj020283ec {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3(s32);
};
extern "C" void func_02018734(void *, void *, void *);
extern "C" void func_02018ad0(void *);
extern "C" void func_02018aa0(void *, s32);
extern u8 data_02130ab4[];

extern "C" u8 *func_020283ec(u8 *obj, u8 *params) {
    u8 *sub;
    func_02018734(obj, params, obj + 0x18);
    sub            = obj + 0x18;
    *(void **) obj = data_02130ab4;
    func_02018ad0(sub);
    func_02018aa0(sub, 0x3E);
    *(s32 *) (sub + 0x10) = 0;
    *(u16 *) (sub + 0x14) = 0x14B;
    *(u8 *) (sub + 0x16)  = 0;
    *(u16 *) (obj + 0x10) = 0x3E;
    ((VObj020283ec *) obj)->f3(*(s32 *) (params + 4));

    return obj;
}
