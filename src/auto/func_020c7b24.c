/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 data_02140184;
extern s32 data_021401ac;
extern volatile u32 data_02140190;

void func_020fbf10(u32 arg0);

s32 func_020c7b24(u32 arg0) {
    s32 n = data_02140184;

    while (data_02140190 != arg0 && data_021401ac == 0 && n > 0) {
        func_020fbf10(0x101D0);
        data_02140190;
        n--;
    }
    if (data_021401ac != 0 || n == 0) {
        return 0;
    }
    return 1;
}
