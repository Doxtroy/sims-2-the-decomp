/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u16 f0;
    u8 f2, f3, f4, f5, f6, f7, f8, f9;
    u16 fa;
    s32 fc;
    s32 f10;
    u16 f14;
    u16 f16;
} E18;
typedef struct {
    E18 e[12];
} G120;

extern s32 data_027e0000;
extern G120 data_021399f0[];
extern u32 data_021397f0[];
extern s32 func_020445d8(u16);

u8 func_0203e8ac(u8 arg0, u16 arg1, s32 arg2, s32 arg3, s32 arg4, u16 arg5, s32 arg6) {
    E18 *e;
    u8 i;
    s32 v;

    for (i = 0; i < 12; i++) {
        if ((data_021399f0[data_027e0000].e[i].f0 & 1) == 0) {
            data_021397f0[data_027e0000]++;
            break;
        }
    }
    e     = &data_021399f0[data_027e0000].e[i];
    e->f0 = arg4;
    e->f2 = arg2;
    e->f3 = arg2;
    e->f4 = arg3;
    e->f5 = arg3;
    e->f6 = arg0;
    e->f7 = arg0 + arg1 - 1;
    e->fa = arg1;
    e->f8 = 0;
    e->f9 = 0;
    v     = func_020445d8(arg5);
    v += arg6;
    e->f14 = arg5;
    e->fc  = v;
    e->f10 = v;
    return i;
}
