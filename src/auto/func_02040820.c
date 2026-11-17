/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct G {
    u8 pad[0x47a0];
    u16 ids[2];
} G;
extern G *data_0213e434;
void func_02040820(void *unused, u8 *k) {
    u16 id = 0;
    s32 i;
    s32 j;
    G *g;
    switch (k[0]) {
        case 0x4f:
            id = 0x8a;
            break;
        case 0x50:
            id = 0x8b;
            break;
        case 0x52:
            id = 0x8d;
            break;
        case 0xfe:
            id = 0x139;
            break;
    }
    if (id == 0) {
        return;
    }
    g = data_0213e434;
    for (i = 0; i < 2; i++) {
        if (id == g->ids[i]) {
            return;
        }
    }
    for (j = 0; j < 2; j++) {
        if (g->ids[j] == 0) {
            g->ids[j] = id;
            return;
        }
    }
}
