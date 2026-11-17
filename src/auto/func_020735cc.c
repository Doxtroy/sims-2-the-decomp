/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_0213e580;
extern u8 *data_0213e434;
s32 func_02077978(void *);

s32 func_020735cc(void) {
    u8 *state;
    u8 value;
    if (*(s32 *) (data_0213e580 + 0xF4) != 0x14) {
        return 0;
    }
    state = data_0213e434 + 0x2F78;
    value = data_0213e434[0x2F78];
    if (value == 0) {
        return 0;
    }
    if (value == 3 && func_02077978(state) != 0) {
        return 0;
    }
    if (data_0213e434[0x2F78] == 4) {
        return 0;
    }
    return 1;
}
