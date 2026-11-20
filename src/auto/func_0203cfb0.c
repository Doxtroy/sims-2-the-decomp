/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Unk02139534 {
    u8 unk0[0x2E];
    u16 unk2E;
    u8 unk30[0xA2 - 0x30];
    u16 unkA2;
    u8 unkA4[0x1D8 - 0xA4];
} Unk02139534;

extern Unk02139534 data_02139534[];
extern s32 data_027e0000;
void func_020f64cc(s32, s32, s32);
void func_020f64b0(s32);
void func_0203c540(void);

void func_0203cfb0(s32 arg) {
    if (data_027e0000 == 0) {
        func_020f64cc(1, arg, 0);
    } else {
        func_020f64b0(arg);
    }
    data_02139534[data_027e0000].unk2E = 0x100;
    data_02139534[data_027e0000].unkA2 = 0x100;
    func_0203c540();
}
