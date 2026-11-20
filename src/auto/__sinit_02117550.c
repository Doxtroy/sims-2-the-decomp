/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 data_021401c4[3];
extern u8 data_021401b8[];
void func_02111e88(void *, void *, void *);
void func_020c9164(void);

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_02117550(void) {
    data_021401c4[0] = 0;
    data_021401c4[1] = 0;
    data_021401c4[2] = 0;
    func_02111e88(data_021401c4, func_020c9164, data_021401b8);
}
