/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u8 pad0[0x10];
    s32 mode;
    u8 pad14[0x550 - 0x14];
    s32 x;
    s32 y;
    u16 map[32 * 32];
    u8 pad[0xd9c - 0x558 - 0x800];
    s32 base;
    s32 pal;
} Obj;

void func_020578e4(Obj *p, s32 unused, s32 sel) {
    s32 mask;
    s32 i;
    s32 tile;
    s32 j;
    u16 *dst;
    s32 k;
    s32 x;

    if (p->mode == 2) {
        mask = 3;
    } else {
        mask = 1 << p->mode;
    }

    for (i = 0; i <= 1; i++) {
        if ((i + 1) & mask) {
            if (p->mode == 2) {
                if (i == 0) {
                    x = (p->x >> 5) - 1;
                } else {
                    x = (p->x >> 5) * 3 - 2;
                }
            } else {
                x = (p->x >> 4) - 1;
            }
            tile = (i == sel) * 9 + i * 18 + 0x13;
            for (j = p->y; j < p->y + 3; j++) {
                dst = &p->map[j << 5] + x;
                for (k = 0; k < 3; k++) {
                    *dst++ = (p->base + tile) | (p->pal << 12);
                    tile++;
                }
            }
        }
    }
}
