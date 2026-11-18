/* compiler: 1.2/sp3 */
#include "m2c.h"

u64 func_020fb864(void);
extern u64 data_02142ec0;

u32 func_020daea8(void) {
    u64 t;
    u64 d;
    u32 q;

    t = func_020fb864() << 6;
    if (data_02142ec0 == 0) {
        data_02142ec0 = t;
    }
    d = t - data_02142ec0;
    q = (u32) (d >> 32) * (u64) 0x1f49a;
    d = d - (u64) q * 0x82ea;
    return q + ((d * 0x7d269b01) >> 46);
}
