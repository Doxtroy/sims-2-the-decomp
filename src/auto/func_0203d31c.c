/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Engine02139438 {
    s32 unk0;
    u8 unk4[0x1D4];
} Engine02139438;

extern s32 data_027e0000;
extern Engine02139438 data_02139438[];
void func_020f64cc(u32, u32, u32);
void func_020f64b0(s32);

void func_0203d31c(void) {
    s32 i;
    for (i = 0; i < 2; i++) {
        if (data_027e0000 == 0) {
            func_020f64cc(1, 0, 1);
        } else {
            func_020f64b0(0);
        }
        data_02139438[data_027e0000].unk0 = 0;
        if (data_027e0000 == 0) {
            data_027e0000 = 1;
        } else {
            data_027e0000 = 0;
        }
    }
}
