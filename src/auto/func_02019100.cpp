/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct VA {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3(s32 a);
};

extern "C" {
extern u8 data_02130188[];
void func_02018734(...);
void func_02018ad0(u8 *arg0);
void func_02018aa0(u8 *arg0, s32 arg1);

u8 *func_02019100(u8 *arg0, u8 *arg1) {
    u8 *p;
    volatile s32 fr[2];
    func_02018734(arg0, arg1, arg0 + 0x18);
    *(u32 *) arg0 = (u32) data_02130188;
    p             = arg0 + 0x18;
    func_02018ad0(p);
    func_02018aa0(p, 2);
    *(u32 *) (p + 0x10)    = 0;
    fr[0]                  = 0xA000;
    fr[1]                  = 0xA000;
    *(u32 *) (p + 0x14)    = 0xA000;
    *(u32 *) (arg0 + 0x34) = 0;
    *(u32 *) (arg0 + 0x38) = 0;
    *(u32 *) (arg0 + 0x3C) = 0;
    *(u16 *) (arg0 + 0x10) = 2;
    ((VA *) arg0)->f3(*(s32 *) (arg1 + 4));
    *(u16 *) (arg0 + 0x40) = 0;
    return arg0;
}
}
