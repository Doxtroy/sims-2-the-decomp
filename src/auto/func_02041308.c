/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern u8 data_0213e580;
s32 func_020523dc(s32, s32);
void func_02076b60(s32);

void func_02041308(u8 *arg0, u8 *arg1) {
    s32 r0;
    s32 a;
    s32 b;

    a = arg1[2];
    b = arg1[3];
    if (a == 255) {
        r0 = *(s32 *) (*(u8 **) &data_0213e580 + 248);
    } else {
        r0 = *(s32 *) (arg0 + 4);
        r0 = *(s32 *) (r0 + 40);
        r0 = func_020523dc(r0 + a * 8, b);
    }
    if (r0 == 0) {
        return;
    }
    func_02076b60(r0 + 120);
}
