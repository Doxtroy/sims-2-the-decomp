/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Unk020d5f2c {
    u8 unk0;
    u8 unk1[3];
    u8 unk4;
    u8 unk5;
    u16 unk6;
    s32 unk8;
} Unk020d5f2c;

void func_02046384(void *, s32, u32);

Unk020d5f2c func_020d5f2c(u8 arg0, s32 arg1, u16 arg2, s32 arg3) {
    Unk020d5f2c result;
    func_02046384(&result, 0, sizeof(Unk020d5f2c));
    result.unk0 = arg0;
    result.unk8 = arg1;
    result.unk6 = arg2;
    result.unk4 = arg3;
    return result;
}
