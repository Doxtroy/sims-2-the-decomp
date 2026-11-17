/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef void (*Fn)(void);
extern s32 data_027e0000;
extern u8 *data_02139250;
extern Fn data_021176ac[];
void func_02004694(void) {
    volatile s32 t[2];
    u8 *g = data_02139250;
    if (data_027e0000 == 0) {
        data_027e0000 = 1;
    } else {
        data_027e0000 = 0;
    }
    if (*(u8 **) (g + 0x34c) != NULL) {
        s32 v = *(s32 *) (*(u8 **) (g + 0x34c) + 0x60);
        t[0]  = v;
        *(s32 *) (*(u8 **) (g + 0x34c) + 0x50) += v;
        v    = *(s32 *) (*(u8 **) (g + 0x34c) + 0x64);
        t[1] = v;
        *(s32 *) (*(u8 **) (g + 0x34c) + 0x54) += v;
    }
    if (*(s32 *) (g + 0x2e8) > 0) {
        *(s32 *) (g + 0x2e8) -= 1;
    }
    data_021176ac[g[0x2ee]]();
    if (data_027e0000 == 0) {
        data_027e0000 = 1;
    } else {
        data_027e0000 = 0;
    }
}
