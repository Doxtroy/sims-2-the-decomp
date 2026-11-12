/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern s32 data_027e0004;
extern s32 data_02139414;
s32 func_020d62a0();
s32 func_020d62f0();
s32 func_020f9bf0();
void func_020f9c48(u16);
void func_0210345c(u16);
void func_0210346c(u16);
s32 func_02103c90(s32, s32, s32, s32, s32, s32);

u8 func_0203b7b8(s32 arg0, s32 arg1, s32 arg2) {
    s32 i;
    s32 z;
    s32 r4;
    s32 ok;

    func_020d62f0();
    data_027e0004 |= 0x400;
    data_02139414 = func_020f9bf0();
    if (data_02139414 == -3) {
        ok = 0;
    } else {
        func_0210346c((u16) data_02139414);
        ok = 1;
    }
    if (ok == 0) {
        return 0;
    }
    i = 0;
    z = 0;
    do {
        r4 = func_02103c90(arg0, arg2, arg1, z, z, z);
        if (r4 != 0) {
            break;
        }
    } while (i-- > 0);
    func_0210345c((u16) data_02139414);
    func_020f9c48((u16) data_02139414);
    func_020d62a0();
    data_027e0004 &= ~0x400;
    if (r4 == 0) {
        return 0;
    }
    return (u8) r4;
}
