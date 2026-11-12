/* compiler: 1.2/sp2p3 */
#include "m2c.h"
s32 func_0204456c();
M2C_UNK func_0204625c(M2C_UNK, s32, s32, s32, s32);
M2C_UNK func_020fca70(s32, s32, s32);
extern u8 data_02139810;
extern s32 data_027e0000;

void func_0203f298(s32 arg0, s32 arg1, s32 arg2) {
    s32 ret;
    s32 *rec;
    s32 temp_r6;
    s32 temp_r4;

    temp_r4 = arg2;
    ret     = func_0204456c();
    temp_r4 = temp_r4 * 2;
    rec     = (s32 *) (&data_02139810 + (data_027e0000 * 16));
    temp_r6 = rec[0] + (arg1 * 2);
    func_020fca70(ret, temp_r6, temp_r4);
    func_0204625c(3, temp_r6, rec[1] + (arg1 * 2), temp_r4, 0x10);
}
