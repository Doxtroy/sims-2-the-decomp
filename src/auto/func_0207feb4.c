/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Slot0207feb4 {
    u8 id;
    u8 unk1[7];
} Slot0207feb4;

typedef struct Unk0207feb4 {
    u8 unk0[0x9E8];
    Slot0207feb4 slots[5];
} Unk0207feb4;

void func_0207fa64(void *, u8, s32);

void func_0207feb4(Unk0207feb4 *obj, u32 id, s32 arg2) {
    u8 i;
    for (i = 0; i < 5; i++) {
        if (id == obj->slots[i].id) {
            func_0207fa64(obj, i, arg2);
            return;
        }
    }
}
