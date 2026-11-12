/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern u8 *data_02139fa4;
void func_020d59bc(s32 a);
void func_02077824(u8 *arg0, s32 arg1, s32 arg2) {
    u8 *q;
    u8 *r;
    if (arg0[0] == 4) {
        return;
    }
    if ((*(u8 *) (arg0 + arg1 + 1) & 1) == 1) {
        return;
    }
    func_020d59bc(0x15A);
    q                    = data_02139fa4;
    q[0x18]              = (u8) arg2;
    q                    = data_02139fa4;
    *(s32 *) (q + 0xE38) = 0x990;
    *(s32 *) (q + 0xE3C) = -1;
    q[0xE40]             = 1;
    r                    = arg0 + 1;
    r[arg1] |= 1;
}
