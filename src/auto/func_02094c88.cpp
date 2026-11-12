/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern "C" {
M2C_UNK func_02011080(void *, void *, s32);
M2C_UNK func_02048108(void *, s32, s32, s32, s32, s32);
extern void *data_0213e580;
extern void *data_02139fa4;
s32 func_02094c88(void *arg0) {
    func_02011080(*(void **) ((u8 *) data_0213e580 + 0xf8), *(void **) ((u8 *) arg0 + 4), 0);
    func_02048108(data_02139fa4, 0x17, 1, 0, 0, 0);
    return 6;
}
}
