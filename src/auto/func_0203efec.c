/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u16 off;
    u16 len;
    s32 src;
} Ent;

extern s32 data_027e0000;
extern u32 data_02139800[];
extern Ent data_021398f0[][16];

s32 func_0204456c(s32 a);

void func_0203efec(s32 a0, u16 a1, u16 a2) {
    s32 cur;
    u32 n;
    s32 r                     = func_0204456c(a0);
    cur                       = data_027e0000;
    n                         = data_02139800[cur];
    data_021398f0[cur][n].src = r;
    data_021398f0[cur][n].off = a1;
    data_021398f0[cur][n].len = a2;
    data_02139800[cur]++;
}
