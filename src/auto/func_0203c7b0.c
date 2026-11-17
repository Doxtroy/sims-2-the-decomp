/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Channel0203c7b0 {
    u8 unk0[0x14];
    u16 *map;
    u8 unk18[0x74 - 0x18];
} Channel0203c7b0;

extern u8 data_02139438;
extern s32 data_027e0000;

void func_0203c7b0(s32 channel, s32 x, s32 y, s32 width, s32 height, u16 value) {
    u16 *map;
    s32 i, j;
    map = ((Channel0203c7b0 *) ((u8 *) &data_02139438 + data_027e0000 * 0x1D8))[channel].map;
    for (j = 0; j < height; j++) {
        u16 *p = map + (y + j) * 32 + x;
        for (i = 0; i < width; i++) {
            *p++ = value;
        }
    }
}
