/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void func_0205871c(s32, s32, s32, s32, s32, s32);
extern s32 data_02139fa4;
void func_0208928c(u8 *o) {
    u16 k = *(u16 *) (o + 0xa);
    u8 *p = *(u8 **) (o + 0x90);
    if (*(s32 *) (p + 0x70) != 0) {
        return;
    }
    if (k == 1) {
        *(s32 *) (p + 0x70) = 1;
        return;
    }
    *(s32 *) (p + 0x70) = 2;
    func_0205871c(data_02139fa4, 0x983, 0x982, 2, 0, 1);
}
