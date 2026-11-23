/* compiler: 1.2/sp2p3 */
#include "m2c.h"

u32 func_0204ca70(u32 n);
void func_02052800(s32 a, u8 b);

typedef struct S {
    s32 x0;
    s32 x4;
} S;

void func_02040dd4(S *s, volatile u8 *tbl) {
    u32 i = func_0204ca70(0x7FFF) % 5U;
    while (tbl[i] == 0) {
        i = (u16) (i - 1);
    }
    func_02052800(s->x4 + 0x24, tbl[i]);
}
