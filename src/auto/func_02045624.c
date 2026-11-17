/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Unk02045624 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    void *items[7];
    u16 unk28;
    u16 unk2A;
    u16 unk2C;
    u16 unk2E;
    u16 unk30;
    u8 unk32;
    u8 unk33;
} Unk02045624;

s32 _s32_div_f(s32, s32);
void func_0204681c(void *);

void func_02045624(Unk02045624 *obj) {
    u8 i;
    u8 count = obj->unk28 / obj->unk32;
    for (i = 0; i < count; i++) {
        if (obj->items[i] != NULL) {
            func_0204681c(obj->items[i]);
            obj->items[i] = NULL;
        }
    }
    obj->unk8  = 0;
    obj->unk4  = obj->unk8;
    obj->unk28 = 0;
    obj->unk2A = 0;
    obj->unk2E = 0;
    obj->unk33 = 0;
    obj->unk30 = 2;
}
