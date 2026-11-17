/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Slot020b90d8 {
    void *handle;
    s32 unk4;
} Slot020b90d8;

typedef struct Unk020b90d8 {
    s32 unk0;
    u8 unk4[0x80];
    Slot020b90d8 slots[4];
    u8 unkA4[0xAC - 0xA4];
    u16 unkAC_0 : 7;
    u16 active : 1;
} Unk020b90d8;

void func_020ee564(void *, void *);
void func_020b8e58(void *);

void func_020b90d8(Unk020b90d8 *obj) {
    s32 i;
    if (obj->active != 1) {
        return;
    }
    for (i = 0; i < 4; i++) {
        if (obj->slots[i].handle != NULL) {
            func_020ee564(obj->unk4, obj->slots[i].handle);
            func_020b8e58(&obj->slots[i]);
        }
    }
    obj->active = 0;
}
