/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 mode;
    u8 pad[0x40];
} S;
extern S data_0213dc70[];
extern s32 data_027e0000;

void func_020508cc(u8 *p) {
    u8 *q;
    s32 i;
    s32 j;
    u8 t;
    u8 u;

    if (data_0213dc70[data_027e0000].mode == 1) {
        for (i = 8; i > 0; i--) {
            q = p + 7;
            for (j = 4; j > 0; j--) {
                t  = *p;
                *p = *q;
                *q = t;
                p++;
                q--;
            }
            p += 4;
        }
    } else {
        for (i = 8; i > 0; i--) {
            q = p + 3;
            for (j = 2; j > 0; j--) {
                t  = *q;
                u  = *p;
                *p = (t >> 4) | (t << 4);
                *q = (u >> 4) | (u << 4);
                p++;
                q--;
            }
            p += 2;
        }
    }
}
