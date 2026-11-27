/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern u8 data_0212787c[];
extern u8 data_02127844[][4][2];
extern u32 data_02127820[][3];
extern u32 data_02127760[];
extern u32 data_02127784[];
extern void func_02016708(void *o, void *p);

void func_020be7a0(u8 *o, s32 x, s32 y) {
    u32 v;
    s32 i;
    u32 a;
    u32 b;
    u8 *p;
    s32 xm;
    s32 ym;
    *(s32 *) (o + 0x78) = x + 1;
    *(s32 *) (o + 0x7c) = y + 1;
    o[0x49] |= 1;
    o[0x4a] = 3;
    func_02016708(o, data_0212787c);
    p  = o;
    xm = x - 1;
    ym = y - 1;
    for (i = 0; i < 4; i++) {
        u32 k               = data_02127844[xm][i][0];
        v                   = data_02127820[k][data_02127844[ym][i][1]];
        *(u16 *) (p + 0x80) = v;
        *(u16 *) (p + 0x82) = v >> 16;
        *(u16 *) (p + 0x84) = data_02127760[k] | 0xc00;
        p += 6;
    }
    a = data_02127784[xm];
    *(u16 *) (o + 0x88) += a;
    *(u16 *) (o + 0x88) |= 0x1000;
    b = data_02127784[ym];
    *(u16 *) (o + 0x8c) += b;
    *(u16 *) (o + 0x8e) |= 0x2000;
    *(u16 *) (o + 0x92) += b;
    *(u16 *) (o + 0x94) += a;
    *(u16 *) (o + 0x94) |= 0x3000;
}
