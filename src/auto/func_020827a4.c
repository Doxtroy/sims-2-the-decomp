/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Entry02121944 {
    u16 *names;
    u8 unk4[0x10];
} Entry02121944;

extern Entry02121944 data_02121944[];
extern u8 *data_0213e434;

u16 func_020827a4(u8 *obj, s32 index) {
    u8 *state = data_0213e434 + 0x47F0;
    if (*(s32 *) (state + 4) == 9 && (u16) * (s32 *) (state + 8) == 0x13) {
        return data_02121944[16].names[index];
    }
    return data_02121944[*(u16 *) (obj + 0x18)].names[index];
}
