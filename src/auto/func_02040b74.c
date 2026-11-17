/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_0213e434;
s32 func_02083d1c(u8 *, u32);
void func_02083d60(u8 *, s32);

void func_02040b74(s32 arg0, u8 *params) {
    s32 slot = func_02083d1c(data_0213e434 + 0x18, params[0]);
    if (slot < 6) {
        func_02083d60(data_0213e434 + 0x18, slot);
    }
}
