#include "m2c.h"

extern s32 data_027e0000;

void func_0203d0a4(s32 bit) {
    *(volatile u32 *) (0x04000000 + (data_027e0000 << 12)) =
        (0x100 << bit) | *(volatile u32 *) (0x04000000 + (data_027e0000 << 12));
}
