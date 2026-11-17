/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Unk020a3b4c {
    u8 unk0[0xA0C];
    u16 cells[0x300];
    s32 count;
} Unk020a3b4c;

extern u8 data_0212525c[24][32];

void func_020a3b4c(Unk020a3b4c *obj) {
    s32 y, x;
    obj->count = 0;
    for (y = 0; y < 24; y++) {
        for (x = 0; x < 32; x++) {
            if (data_0212525c[y][x]) {
                obj->cells[obj->count++] = x + y * 32;
            }
        }
    }
}
