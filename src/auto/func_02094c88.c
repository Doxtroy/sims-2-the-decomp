/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_0213e580;
extern s32 data_02139fa4;
void func_02011080(s32, s32, s32);
void func_02048108(s32, s32, s32, s32, s32, s32);

s32 func_02094c88(s32 *obj) {
    func_02011080(*(s32 *) (data_0213e580 + 0xF8), obj[1], 0);
    func_02048108(data_02139fa4, 0x17, 1, 0, 0, 0);
    return 6;
}
