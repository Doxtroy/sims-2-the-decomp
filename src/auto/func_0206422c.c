/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern u8 *data_02139fa4;
extern u8 *data_0213e580;
extern u32 data_027e0004;
s32 func_020480f0(void *);
s32 func_020187ec(s32);
s32 func_0204eca4(void);
s32 func_0206422c(u8 *arg0) {
    u8 *p;
    u8 *q;
    s32 t;

    if (func_020480f0(data_02139fa4) == 0) {
        p = data_02139fa4;
        if (*(s32 *) (p + 8) == 0) {
            q = *(u8 **) (p + 0xDAC);
            if ((q != 0 ? *(s32 *) (q + 4) : 0x32) == 0xC) {
                if (*(s32 *) (p + 0xDF0) == 0x32) {
                    if (*(s32 *) (p + 0xE10) == 0x32) {
                        t = *(s32 *) (data_0213e580 + 0xF8);
                        if (t != 0) {
                            if (func_020187ec(t + 0xE0) == 7) {
                                if (*(u8 *) (arg0 + 0x21D8) == 0 || *(s32 *) (arg0 + 0x21B4) == -1) {
                                    if (func_0204eca4() == 0) {
                                        if ((data_027e0004 & 0x60) == 0) {
                                            return 1;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
