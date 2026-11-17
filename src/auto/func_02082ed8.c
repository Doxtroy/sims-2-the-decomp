/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Entry02082e68 {
    u8 unk0;
    u8 unk1;
    u8 unk2;
    u8 id : 6;
    u8 flag : 1;
    u8 unk3_7 : 1;
} Entry02082e68;

typedef struct Slot02082ed8 {
    u8 id;
    u8 unk1[3];
} Slot02082ed8;

typedef struct Unk02082ed8 {
    Entry02082e68 entries[30];
    Slot02082ed8 slotsA[3];
    Slot02082ed8 slotsB[2];
} Unk02082ed8;

void func_02082ed8(Unk02082ed8 *obj) {
    u8 i;
    for (i = 0; i < 30; i++) {
        obj->entries[i].id   = 0x3F;
        obj->entries[i].unk0 = 0xD8;
    }
    for (i = 0; i < 3; i++) {
        obj->slotsA[i].id = 0x3F;
    }
    for (i = 0; i < 2; i++) {
        obj->slotsB[i].id = 0x3F;
    }
}
