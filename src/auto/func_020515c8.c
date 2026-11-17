/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Font0213dc40 {
    u8 unk0[0x1C];
    s32 advance;
    u8 unk20[0x24];
} Font0213dc40;

extern s32 data_027e0000;
extern Font0213dc40 data_0213dc40[];
s32 func_02051424(s32, s32, s32, s32, u8 **, s32, s32 *);

void func_020515c8(s32 arg0, s32 arg1, s32 *x, s32 arg3, u8 *text, s32 arg5) {
    s32 state = 0x7FFFFFFF;
    if (*text == 0) {
        return;
    }
    do {
        arg0 = func_02051424(arg0, arg1, *x, arg3, &text, arg5, &state);
        *x += data_0213dc40[data_027e0000].advance;
    } while (*text != 0);
}
