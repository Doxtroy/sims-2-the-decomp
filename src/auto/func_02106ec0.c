/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern void *func_02104e78(void);
extern s32 func_02104d58(s32, s32, s32);
extern void func_020fae5c(void *, s32);
extern s16 func_02106b78(void *, s32, s32, s32, s32);

s32 func_02106ec0(void (*arg0)(s16 *)) {
    s16 sp4;
    volatile s16 sp6;
    s32 temp_r0;
    u8 *temp_r4;

    temp_r4 = (u8 *) func_02104e78();
    temp_r0 = func_02104d58(2, 9, 0xA);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_020fae5c(*(void **) (temp_r4 + 4) + 0xC, 4);
    if (*(s32 *) (*(u8 **) (temp_r4 + 4) + 0xC) == 0) {
        return 3;
    }
    *(s32 *) (temp_r4 + 0x15C) = 1;
    sp6                        = func_02106b78(temp_r4 + 0x160, 8, 0xFFFF, 2, 1);
    sp4                        = 0x15;
    arg0(&sp4);
    return 2;
}
