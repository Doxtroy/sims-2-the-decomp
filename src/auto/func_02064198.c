/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern u8 *data_02139fa4;
extern s32 data_027e0004;
s32 func_020480f0(u8 *);
s32 func_02064198(s32 *arg0) {
    u8 *p;
    u8 *q;
    s32 v;
    if (func_020480f0(data_02139fa4) != 0 || (p = data_02139fa4, *(s32 *) (p + 8) != 0) || *(s32 *) (p + 0xE10) != 0x32 ||
        ((q = *(u8 **) (p + 0xDAC), v = (q != 0) ? *(s32 *) (q + 4) : 0x32) == 0x14) || (*arg0 & 0x80) != 0 ||
        (data_027e0004 & 0x40) == 0x40) {
        return 0;
    }
    return 1;
}
