/* compiler: 1.2/sp2p3 */
#include "m2c.h"
s32 func_02077978(void *);
extern u8 *volatile data_0213e434;
extern void *data_0213e580;
s32 func_020735cc(void) {
    u8 t;
    u8 *b;
    u8 *a;
    if (M2C_FIELD(data_0213e580, s32 *, 0xF4) != 0x14) {
        return 0;
    }
    b = data_0213e434;
    a = b + 0x2F78;
    t = b[0x2F78];
    if (t == 0) {
        return 0;
    }
    if ((t == 3) && (func_02077978(a) != 0)) {
        return 0;
    }
    if (data_0213e434[0x2F78] == 4) {
        return 0;
    }
    return 1;
}
