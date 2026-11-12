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
s8 func_0204cbb4(...);
extern M2C_UNK data_0213134c;
void *func_02030c94(void *arg0, void *arg1) {
    u8 *p = (u8 *) arg0;
    void *temp_r4;
    func_02018734(arg0, arg1, p + 0x18);
    temp_r4                        = p + 0x18;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0213134c;
    func_02018ad0(temp_r4);
    func_02018aa0(temp_r4, 0x40);
    M2C_FIELD(arg0, s16 *, 0x10) = 0x40;
    ((VA *) arg0)->f3(M2C_FIELD(arg1, s32 *, 4));
    M2C_FIELD(arg0, s8 *, 0x28)  = 0;
    M2C_FIELD(arg0, s8 *, 0x29)  = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s8 *, 0x30)  = 0;
    M2C_FIELD(arg0, s8 *, 0x31)  = func_0204cbb4(0, 4);
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    return arg0;
}
}
