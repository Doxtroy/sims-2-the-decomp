/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02048108(s32, s32, s32, s32, s32, s32);

extern u8 data_0211f16c;
extern u8 data_02139fa4;
extern u8 data_0213e580;

void func_02041fa4(s32 unused, u8 *arg1) {
    u8 fr[8];
    u32 r4;

    r4 = arg1[0];
    if (r4 == 3 || r4 == 0x23 || r4 == 0xa6) {
        func_02048108(*(s32 *) &data_02139fa4, 0x21, 1, *(u16 *) (*(u8 **) ((u8 *) &data_0211f16c + r4 * 8)),
                      *(s32 *) ((u8 *) (*(u8 **) &data_0213e580) + 0xf8), arg1[1] | (arg1[2] << 8));
        return;
    }
    fr[7]             = fr[7] & ~1;
    fr[6]             = 0x3f;
    *(u16 *) (fr + 4) = 0x58;
    fr[7]             = fr[7] | 2;
    *(u16 *) fr       = r4;
    fr[7]             = fr[7] & ~4;
    fr[2]             = arg1[1];
    fr[3]             = arg1[2];
    func_02048108(*(s32 *) &data_02139fa4, 0xe, 1, *(s32 *) ((u8 *) (*(u8 **) &data_0213e580) + 0xf8), *(volatile s32 *) fr,
                  *(volatile s32 *) (fr + 4));
}
