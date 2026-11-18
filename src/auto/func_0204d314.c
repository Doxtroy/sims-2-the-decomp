/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02046384(void *, s32, u32);

typedef struct G {
    u32 pad0;
    u16 *buf;
    u8 pad8[0xA8 - 8];
    u8 *cur;
    u32 ac;
    u32 used;
    u32 pct;
} G;

extern G data_0213d7b0;
static inline u16 calcSum(u16 *p, s32 n) {
    u16 sum = 0;
    for (; n > 0; n--) {
        sum += *p++;
    }
    return sum;
}
void func_0204d314(void) {
    u16 *buf;
    func_02046384(data_0213d7b0.buf, 0, 0xAA0);
    buf                = data_0213d7b0.buf;
    data_0213d7b0.cur  = (u8 *) buf;
    data_0213d7b0.ac   = 0;
    data_0213d7b0.used = data_0213d7b0.cur - (u8 *) buf;
    data_0213d7b0.pct  = data_0213d7b0.used * 100 / 0xAA0;
    buf[0x54F]         = 0;
    buf[0x54F]         = -calcSum(buf, 0x550);
}
