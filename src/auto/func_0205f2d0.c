/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Unk0205f2d0 {
    u8 unk0[8];
    u8 levels[16];
} Unk0205f2d0;

extern u8 data_02131f34[];
extern u8 *data_0213e434;
s32 func_0207355c(void *, s32);

void func_0205f2d0(Unk0205f2d0 *obj, s32 index, s32 amount) {
    if (data_02131f34[index] == 0) {
        return;
    }
    if (func_0207355c(data_0213e434 + 0x41F8, index) == 0) {
        return;
    }
    obj->levels[index] += (u8) amount;
    if (obj->levels[index] > 9) {
        obj->levels[index] = 9;
    }
}
