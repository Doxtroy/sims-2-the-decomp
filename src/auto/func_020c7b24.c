/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 data_02140184;
extern volatile s32 data_021401ac;
extern volatile s32 data_02140190;
void func_020fbf10(s32);

s32 func_020c7b24(s32 target) {
    s32 tries = data_02140184;
    while (data_02140190 != target && data_021401ac == 0 && tries > 0) {
        func_020fbf10(0x101D0);
        data_02140190;
        tries--;
    }
    if (data_021401ac != 0 || tries == 0) {
        return 0;
    }
    return 1;
}
