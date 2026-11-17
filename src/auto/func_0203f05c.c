/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Buffers0203f05c {
    u16 *src;
    u16 *dst;
} Buffers0203f05c;

typedef struct Unk0203f05c {
    s32 unk0;
    s32 unk4;
    Buffers0203f05c buffers;
} Unk0203f05c;

extern Unk0203f05c data_02139810[];
extern s32 data_027e0000;
void func_020fca70(s32, void *, s32);
void func_0204625c(s32, void *, void *, s32, s32);

void func_0203f05c(s32 arg0, s32 index, s32 count) {
    Buffers0203f05c *buffers = &data_02139810[data_027e0000].buffers;
    u16 *src                 = buffers->src + index;
    func_020fca70(arg0, src, count * 2);
    func_0204625c(3, src, buffers->dst + index, count * 2, 0x10);
}
