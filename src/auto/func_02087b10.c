/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u32 data_027e0004;
void *func_0204688c(s32, s32, s32);
u8 *func_0200b448(void *, s32);

u8 *func_02087b10(s32 arg0, s32 arg1) {
    u8 *obj = func_0204688c(0x220, 3, 4);
    if (obj != NULL) {
        obj = func_0200b448(obj, arg1);
    }
    *(u32 *) (obj + 4) |= 4;
    if ((data_027e0004 & 8) == 8) {
        u32 *flags = (u32 *) (obj + 4);
        *flags &= ~1;
        *flags |= 0x2000000;
    }
    return obj;
}
