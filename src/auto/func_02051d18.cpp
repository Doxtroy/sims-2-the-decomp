/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern "C" void func_02046384(void *, s32, s32);
extern "C" void func_02051c4c(s32, s32);
extern u8 data_0213dc40;
extern u8 data_0213ddc8;
extern u8 data_0211e78c;
typedef struct {
    u16 a, b, c, d;
} E8;
extern "C" void func_02051d18(void) {
    u32 i;
    s32 zero;
    u8 *p;
    func_02046384(&data_0213dc40, 0, 0x88);
    func_02046384(&data_0213ddc8, 0, 0x1f8);
    p    = &data_0213ddc8;
    i    = 0;
    zero = 0;
    do {
        *(u16 *) p = ((E8 *) &data_0211e78c)[i].a;
        func_02051c4c(i, zero);
        i++;
        p = p + 0x38;
    } while (i < 9);
}
