/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct VObj020389ec {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3(s32);
};
extern "C" void func_02018734(void *, void *, void *);
extern "C" void func_02018ad0(void *);
extern "C" void func_02018aa0(void *, s32);
extern u8 data_02131654[];
extern "C" u8 *func_020389ec(u8 *o, u8 *p) {
    u8 *sub;
    func_02018734(o, p, o + 0x18);
    sub          = o + 0x18;
    *(void **) o = data_02131654;
    func_02018ad0(sub);
    func_02018aa0(sub, 0x20);
    *(s32 *) (sub + 0x10) = 0;
    *(u8 *) (sub + 0x14)  = 2;
    *(u16 *) (o + 0x10)   = 0x20;
    ((VObj020389ec *) o)->f3(*(s32 *) (p + 4));

    return o;
}
