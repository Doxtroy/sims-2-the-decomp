/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u32 data_027e0000;
extern u8 data_0213d570;
extern u8 data_0213d56c;

void func_02049b00(u32 *arg0, u32 arg1) {
    u32 t;
    u32 o1;
    u32 o2;
    volatile u8 *p;

    if (arg1 == 0xff) {
        return;
    }
    t = arg0[1] & 0x8000000;
    if (t != 0) {
        if (t != 0) {
            arg0[1] = arg0[1] & ~0x8000000;
            o2      = ((arg0[5] << 16) >> 28) * 12;
            o1      = data_027e0000 * 0xc4;
            p       = (volatile u8 *) ((u8 *) &data_0213d570 + o1);
            if (*(u8 *) (o2 + (u32) p) != 0) {
                p[o2] = p[o2] - 1;
                if (p[o2] == 0) {
                    if ((((u8 *) &data_0213d570 + 1 + o1)[o2] & 2) == 0) {
                        *(u16 *) ((u8 *) &data_0213d56c + o1 + o2) = 0xff;
                    }
                }
            }
        }
    }
    arg0[5]      = (arg0[5] & ~0xf000) | ((arg1 & 0xf) << 12);
    p            = (volatile u8 *) ((u8 *) &data_0213d570 + data_027e0000 * 0xc4);
    p[arg1 * 12] = p[arg1 * 12] + 1;
    arg0[1]      = arg0[1] | 0x8000000;
}
