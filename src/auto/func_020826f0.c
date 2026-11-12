/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern u8 data_0213e434;
extern u8 data_02121944;
extern u8 data_02121948;
void *func_020826f0(u8 *arg0, s32 x, s32 y) {
    u8 *ip;
    s32 off;
    if (x >= 15) {
        x = x % 3;
    }
    ip = *(u8 **) &data_0213e434 + 0x47F0;
    if (*(s32 *) (ip + 4) == 9) {
        if ((u16) * (s32 *) (ip + 8) == 0x13) {
            return *(u8 **) (&data_02121944 + 0x144) + (x << 4) + (y << 2);
        }
    }
    off = *(u16 *) (arg0 + 0x18) * 0x14;
    return *(u8 **) (&data_02121948 + off) + (x << 4) + (y << 2);
}
