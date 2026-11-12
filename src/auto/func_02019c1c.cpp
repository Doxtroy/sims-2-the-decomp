/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct VA {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3(s32);
};
extern "C" {

void func_02018734(...);
void func_02018aa0(...);
void func_02018ad0(...);
extern u8 data_021302b0;

void *func_02019c1c(u8 *arg0, u8 *arg1) {
    volatile s32 w[2];
    u8 *temp_r4;

    func_02018734(arg0, arg1, arg0 + 0x18);
    temp_r4       = arg0 + 0x18;
    *(u8 **) arg0 = &data_021302b0;
    func_02018ad0(temp_r4);
    *(s32 *) (temp_r4 + 0x10) = 0;
    *(s32 *) (temp_r4 + 0x14) = 0;
    *(s32 *) (temp_r4 + 0x18) = 0;
    func_02018aa0(temp_r4, 0x10);
    w[0]                      = 0x199;
    w[1]                      = 0x199;
    *(s32 *) (temp_r4 + 0x20) = 0x199;
    *(s16 *) (temp_r4 + 0x1C) = 7;
    *(s8 *) (temp_r4 + 0x24)  = 0;
    *(s32 *) (temp_r4 + 0x28) = 0;
    *(s32 *) (temp_r4 + 0x2C) = 0;
    *(s8 *) (temp_r4 + 0x25)  = 0;
    *(s16 *) (arg0 + 0x10)    = 0x10;
    *(s8 *) (arg0 + 0x48)     = 1;
    ((VA *) arg0)->f3(*(s32 *) (arg1 + 4));
    if (*(s32 *) (arg0 + 0x44) == 0) {
        *(s32 *) (arg0 + 0x44) = *(s32 *) (arg0 + 4);
    }
    return arg0;
}
}
