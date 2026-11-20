/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Unk02139414 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
} Unk02139414;

extern u32 data_027e0004;
extern Unk02139414 data_02139414;
s32 func_020f9bf0(void);
void func_0210346c(u16);
void func_0203b3f0(void);
void func_02103c90(s32, void *, s32, void (*)(void), s32, s32);

void func_0203b594(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    u8 buffer[8];
    s32 id;
    data_02139414.unk10 = arg0;
    data_02139414.unk14 = arg1;
    data_02139414.unk18 = arg2;
    data_02139414.unk1C = arg3;
    data_02139414.unk20 = arg4;
    data_027e0004 |= 0x400;
    id                 = func_020f9bf0();
    data_02139414.unk0 = id;
    data_02139414.unk4 = 0;
    data_02139414.unk8 = 0;
    func_0210346c(id);
    func_02103c90(arg0, buffer, 1, func_0203b3f0, 0, 1);
}
