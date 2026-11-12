/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_020f9c48(u16);
M2C_UNK func_0210345c(u16);
s32 func_021034bc();
typedef struct {
    s32 a;
    void (*fn)(s32);
    s32 arg;
    s8 c;
} S;
extern S data_02139414;
extern s32 data_027e0004;
void func_0203b50c(void) {
    data_02139414.c = (func_021034bc() == 0);
    func_0210345c((u16) data_02139414.a);
    func_020f9c48((u16) data_02139414.a);
    data_027e0004 &= ~0x400;
    if (data_02139414.fn != NULL) {
        data_02139414.fn(data_02139414.arg);
    }
}
