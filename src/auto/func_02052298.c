/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_020444f8(u16);
M2C_UNK func_020445d8(u16);
M2C_UNK func_02045194();
M2C_UNK func_020fbff0(u8 *);
extern u16 data_0211e7d4[];
extern s8 data_0213dfc0;
extern u8 data_0213dfc4;
void func_02052298(void) {
    u8 sp0[0x50];
    u8 var_r4;
    data_0213dfc4 = 6;
    func_020fbff0(sp0);
    var_r4 = sp0[0];
    if (var_r4 == 0) {
        var_r4 = 1;
    }
    if ((s32) var_r4 >= 6) {
        var_r4 = 1;
    }
    if ((data_0213dfc4 != var_r4) && (data_0213dfc4 != 6)) {
        func_020444f8(data_0211e7d4[data_0213dfc4]);
    }
    func_020445d8(data_0211e7d4[var_r4]);
    func_02045194();
    data_0213dfc4 = var_r4;
    switch (*(volatile u8 *) &data_0213dfc4) {
        case 2:
            data_0213dfc0 = 0x20;
            return;
        case 0:
        case 1:
        case 3:
        case 4:
        case 5:
            data_0213dfc0 = 0x2E;
            break;
    }
}
