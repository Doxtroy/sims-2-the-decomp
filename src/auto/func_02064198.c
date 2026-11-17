/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Mode02064198 {
    s32 unk0;
    s32 state;
} Mode02064198;

extern u8 *data_02139fa4;
extern u32 data_027e0004;
s32 func_020480f0(void *);

static inline s32 GetModeState(Mode02064198 *mode) {
    if (mode != NULL) {
        return mode->state;
    }
    return 0x32;
}

s32 func_02064198(u32 *flags) {
    if (func_020480f0(data_02139fa4) != 0 || *(s32 *) (data_02139fa4 + 8) != 0 || *(s32 *) (data_02139fa4 + 0xE10) != 0x32 ||
        GetModeState(*(Mode02064198 **) (data_02139fa4 + 0xDAC)) == 0x14 || (*flags & 0x80) ||
        (data_027e0004 & 0x40) == 0x40) {
        return 0;
    }
    return 1;
}
