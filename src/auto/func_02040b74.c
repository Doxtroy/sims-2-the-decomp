/* compiler: 1.2/sp2p3 */
#include "m2c.h"
s32 func_02083d1c(s32, u8);
void func_02083d60(s32, s32);
extern s32 data_0213e434;
void func_02040b74(s32 arg0, u8 *arg1) {
    s32 r;
    r = func_02083d1c(data_0213e434 + 0x18, *arg1);
    if (r >= 6) {
        return;
    }
    func_02083d60(data_0213e434 + 0x18, r);
}
