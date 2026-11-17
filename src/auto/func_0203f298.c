/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Buffers0203f298 {
    u16 *src;
    u16 *dst;
} Buffers0203f298;

typedef struct Unk02139810 {
    Buffers0203f298 buffers0;
    Buffers0203f298 buffers1;
} Unk02139810;

extern Unk02139810 data_02139810[];
extern s32 data_027e0000;
s32 func_0204456c(s32);
void func_020fca70(s32, void *, s32);
void func_0204625c(s32, void *, void *, s32, s32);

void func_0203f298(s32 resource, s32 index, s32 count) {
    s32 data                 = func_0204456c(resource);
    Buffers0203f298 *buffers = &data_02139810[data_027e0000].buffers0;
    u16 *src                 = buffers->src + index;
    func_020fca70(data, src, count * 2);
    func_0204625c(3, src, buffers->dst + index, count * 2, 0x10);
}
