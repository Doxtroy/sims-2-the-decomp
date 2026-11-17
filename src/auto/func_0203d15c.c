/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct {
    u16 pri : 2;
    u16 cb : 3;
    u16 rest : 3;
    u16 sb : 5;
    u16 hi : 3;
} Cnt;
typedef struct Ch {
    u16 cnt;
    u8 pad2[6];
    u32 x8;
    u32 xc;
    u32 x10;
    u8 pad14[0x74 - 0x14];
} Ch;
extern s32 data_027e0000;
extern u8 data_02139438;
void func_0203d15c(s32 idx, Cnt cnt) {
    Ch *c                                              = &((Ch *) ((u8 *) &data_02139438 + data_027e0000 * 0x1D8 + 8))[idx];
    c->cnt                                             = *(u16 *) &cnt;
    c->xc                                              = 0x6000000 + (data_027e0000 << 21) + (cnt.sb << 11);
    c->x8                                              = c->xc;
    c->x10                                             = 0x6000000 + (data_027e0000 << 21) + (cnt.cb << 14);
    ((u16 *) (0x4000008 + (data_027e0000 << 12)))[idx] = *(u16 *) &cnt;
}
