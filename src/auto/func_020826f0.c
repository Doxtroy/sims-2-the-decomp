/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct T {
    s32 x0;
    u8 *p;
    u8 pad[0xc];
} T;
extern u8 *data_0213e434;
extern T data_02121944[];
u8 *func_020826f0(u8 *o, s32 a, s32 b) {
    u8 *g;
    if (a >= 15) {
        a %= 3;
    }
    g = data_0213e434 + 0x47f0;
    if (*(s32 *) (g + 4) == 9 && (u16) * (s32 *) (g + 8) == 0x13) {
        return data_02121944[16].p + a * 16 + b * 4;
    }
    return data_02121944[*(u16 *) (o + 0x18)].p + a * 16 + b * 4;
}
