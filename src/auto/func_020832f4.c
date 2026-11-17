/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void (*data_02121dc8[])(void **, s32);

u8 func_020832f4(void **slots, s32 type, s32 arg) {
    u8 i;
    for (i = 0; i < 2; i++) {
        if (slots[i] == NULL) {
            data_02121dc8[type](&slots[i], arg);
            break;
        }
    }
    return i;
}
