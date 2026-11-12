/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern u8 data_02131f34;
extern u8 data_0213e434;
extern "C" s32 func_0207355c(void *, s32);
extern "C" void func_0205f2d0(u8 *arg0, s32 arg1, s32 arg2) {
    u8 *p;
    u8 *q;
    u8 *base;
    u8 flag;
    flag = *(u8 *) (&data_02131f34 + arg1);
    if (flag == 0) {
        return;
    }
    base = *(u8 **) &data_0213e434;
    if (func_0207355c(base + 0x41f8, arg1) == 0) {
        return;
    }
    p  = arg0 + 8;
    q  = p + arg1;
    *q = (u8) (*q + (u8) arg2);
    if (*q > 9) {
        *q = 9;
    }
}
