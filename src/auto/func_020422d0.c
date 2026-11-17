/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 data_02139fa4;
void func_02048108(s32, s32, s32, s32, s32, s32);

void func_020422d0(s32 arg0, u8 *params) {
    s32 notTwo = 0;
    if (params[0] != 2) {
        notTwo = 1;
    }
    func_02048108(data_02139fa4, params[0], notTwo, params[1], params[2], 0);
}
