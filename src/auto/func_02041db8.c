/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Word02041db8 {
    s32 value;
} Word02041db8;

typedef struct Unk02041db8_B {
    u8 unk0[0x28];
    u8 *table;
} Unk02041db8_B;

typedef struct Unk02041db8 {
    s32 unk0;
    Unk02041db8_B *b;
} Unk02041db8;

extern u8 *data_0213e580;
extern u8 data_02139fb4[];
s32 func_020523dc(void *, s32);
void func_020ba100(void *, void *, Word02041db8, s32);

void func_02041db8(Unk02041db8 *obj, u8 *params) {
    u8 index = params[4];
    u8 arg   = params[5];
    u8 *result;
    Word02041db8 speed;
    if (index == 0xFF) {
        result = *(u8 **) (data_0213e580 + 0xF8);
    } else {
        result = (u8 *) func_020523dc(obj->b->table + index * 8, arg);
    }
    if (result == NULL) {
        return;
    }
    speed.value = 0x1E000;
    func_020ba100(data_02139fb4, result + 0x78, speed, params[6]);
}
