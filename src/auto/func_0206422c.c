/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Mode0206422c {
    s32 unk0;
    s32 state;
} Mode0206422c;

extern u8 *data_02139fa4;
extern u8 *data_0213e580;
extern u32 data_027e0004;
s32 func_020480f0(void *);
u16 func_020187ec(void *);
s32 func_0204eca4(void);

static inline s32 GetModeState(Mode0206422c *mode) {
    if (mode != NULL) {
        return mode->state;
    }
    return 0x32;
}

s32 func_0206422c(u8 *obj) {
    u8 *sim;
    if (func_020480f0(data_02139fa4) == 0 && *(s32 *) (data_02139fa4 + 8) == 0 &&
        GetModeState(*(Mode0206422c **) (data_02139fa4 + 0xDAC)) == 12 && *(s32 *) (data_02139fa4 + 0xDF0) == 0x32 &&
        *(s32 *) (data_02139fa4 + 0xE10) == 0x32) {
        sim = *(u8 **) (data_0213e580 + 0xF8);
        if (sim != NULL && func_020187ec(sim + 0xE0) == 7) {
            if (obj[0x21D8] == 0 || *(s32 *) (obj + 0x21B4) == -1) {
                if (func_0204eca4() == 0 && !(data_027e0004 & 0x60)) {
                    return 1;
                }
            }
        }
    }
    return 0;
}
