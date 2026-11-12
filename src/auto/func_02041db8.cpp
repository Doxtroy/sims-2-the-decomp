/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 v;
} W;
extern "C" {
s32 func_020523dc(s32, u8);
s32 func_020ba100(void *, s32, W, u8);
extern u8 data_02139fb4;
extern u8 data_0213e580;

void func_02041db8(u8 *arg0, u8 *arg1) {
    s32 var_r1;
    u8 temp_r2;
    u8 b5;
    W w;

    temp_r2 = arg1[4];
    b5      = arg1[5];
    if (temp_r2 == 0xFF) {
        var_r1 = *(s32 *) (*(u8 **) &data_0213e580 + 0xF8);
    } else {
        var_r1 = func_020523dc(*(s32 *) (*(u8 **) (arg0 + 4) + 0x28) + (temp_r2 * 8), b5);
    }
    if (var_r1 == 0) {
        return;
    }
    w.v = 0x1E000;
    func_020ba100(&data_02139fb4, var_r1 + 0x78, w, arg1[6]);
}
}
