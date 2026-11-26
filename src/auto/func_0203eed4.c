/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u8 f0, f1, f2, f3, f4, f5, f6, f7;
} E8;
typedef struct {
    E8 e[12];
} G60;
typedef struct {
    u16 f0;
    u8 pad[0x12];
    u16 f14;
    u16 f16;
} E18;
typedef struct {
    E18 e[12];
} G120;

extern s32 data_027e0000;
extern s32 data_021397f8[];
extern G60 data_02139830[];
extern u32 data_021397f0[];
extern G120 data_021399f0[];
extern s32 data_02139800[];
extern void func_02046384(void *, s32, u32);
extern void func_020444f8(s32);

void func_0203eed4(void) {
    u32 i;
    u32 j;
    E18 *e;
    data_021397f8[data_027e0000] = 0;
    for (i = 0; i < 12; i++) {
        func_02046384(&data_02139830[data_027e0000].e[i], 0, 8);
    }
    data_021397f0[data_027e0000] = 0;
    for (j = 0; j < 12; j++) {
        e = &data_021399f0[data_027e0000].e[j];
        if (e->f14 != 0xffff) {
            func_020444f8(e->f14);
            e->f14 = 0xffff;
        }
        func_02046384(e, 0, 0x18);
        e->f14 = 0xffff;
        if (data_021397f0[data_027e0000] != 0) {
            data_021397f0[data_027e0000]--;
        }
    }
    data_02139800[data_027e0000] = 0;
}
