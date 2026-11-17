/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0203c744(u16 *map, s32 x, s32 y, s32 width, s32 height, u16 value) {
    s32 i, j;
    for (j = 0; j < height; j++) {
        u16 *p = map + (y + j) * 32 + x;
        for (i = 0; i < width; i++) {
            *p++ = value;
        }
    }
}
