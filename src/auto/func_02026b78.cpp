/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct VA {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3(int);
};
extern "C" {
void func_02018734(...);
void func_02018aa0(...);
void func_02018ad0(...);
extern M2C_UNK data_02130810;
void *func_02026b78(void *arg0, void *arg1) {
    u8 *obj;
    u8 *t4;
    obj = (u8 *) arg0;
    func_02018734(arg0, arg1, obj + 0x18);
    t4                             = obj + 0x18;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02130810;
    func_02018ad0(t4);
    func_02018aa0(t4, 0x26);
    M2C_FIELD(t4, s32 *, 0x10)   = 0;
    M2C_FIELD(t4, s8 *, 0x14)    = 0;
    M2C_FIELD(t4, s32 *, 0x18)   = 0;
    M2C_FIELD(arg0, s16 *, 0x10) = 0x26;
    ((VA *) obj)->f3(M2C_FIELD(arg1, s32 *, 4));
    return arg0;
}
}
