/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Mode02026abc {
    s32 unk0;
    s32 state;
    u8 unk8[0x64];
    s32 unk6C;
} Mode02026abc;

typedef struct Unk02026abc {
    s32 unk0;
    s32 id;
    u8 unk8[0xB];
    u8 unk13;
    u8 unk14[0x14];
    s32 unk28;
    u8 unk2C;
    u8 unk2D[3];
    s32 unk30;
} Unk02026abc;

extern u8 *data_0213e580;
extern u8 *data_02139fa4;
void func_02067a04(void *, s32);

void func_02026abc(Unk02026abc *obj) {
    if (obj->id == *(s32 *) (data_0213e580 + 0xF8)) {
        u8 *game           = data_02139fa4;
        Mode02026abc *mode = *(Mode02026abc **) (game + 0xDAC);
        s32 state;
        if (mode != NULL) {
            state = mode->state;
        } else {
            state = 0x32;
        }
        if (state == 12) {
            s32 value = obj->unk28;
            mode      = *(Mode02026abc **) (game + 0xDAC);
            if (value != -1) {
                mode->unk6C = value;
            }
            if (obj->unk2C != 0) {
                func_02067a04(mode, obj->unk30);
            }
        }
    }
    obj->unk13 = 1;
}
