/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Font0213dc40 {
    u8 unk0[0x14];
    s32 unk14;
    u32 unk18;
    s32 advance;
    u8 unk20[0xC];
    u32 tileSize;
    s32 unk30;
    u8 unk34[0x10];
} Font0213dc40;

extern s32 data_027e0000;
extern Font0213dc40 data_0213dc40[];

void func_02050804(u32 *src, s32 n, u16 *map, u8 *dst, s32 tile) {
    while (n-- != 0) {
        u32 size;
        u32 cnt;
        u32 *d;
        size = data_0213dc40[data_027e0000].tileSize;
        d    = (u32 *) (dst + tile * size);
        cnt  = size >> 2;
        while (cnt-- != 0) {
            *d++ = *src++;
        }
        if (data_0213dc40[data_027e0000].unk30 == 1) {
            *map = tile;
        } else if (data_0213dc40[data_027e0000].unk14 == -1) {
            *map = tile | (*map & 0xf000);
        } else {
            *map = tile | data_0213dc40[data_027e0000].unk18;
        }
        map += 0x20;
        tile++;
    }
}
