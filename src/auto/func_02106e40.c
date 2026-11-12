/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02104d58(M2C_UNK, M2C_UNK, M2C_UNK);
void *func_02104e78();
s16 func_02106abc(void *);

s32 func_02106e40(M2C_UNK (*arg0)(s16 *)) {
    volatile s16 buf[3];
    u8 *temp_r4;
    s32 temp_r0;
    s16 res;

    temp_r4 = (u8 *) func_02104e78();
    temp_r0 = func_02104d58(2, 9, 0xA);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    if (*(s32 *) (temp_r4 + 0x15C) == 0) {
        return 3;
    }
    res                        = func_02106abc(temp_r4 + 0x160);
    *(s32 *) (temp_r4 + 0x15C) = 0;
    buf[1]                     = res;
    buf[0]                     = 0x16;
    arg0((s16 *) buf);
    return 2;
}
