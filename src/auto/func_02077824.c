/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void func_020d59bc(s32);
typedef struct {
    u8 pad[0x18];
    u8 x18;
    u8 pad2[0xe38 - 0x19];
    s32 e38;
    s32 e3c;
    u8 e40;
} G;
extern G *data_02139fa4;
typedef struct {
    u8 type;
    u8 flags[1];
} S;
void func_02077824(S *s, s32 idx, u8 v) {
    G *g;
    if (s->type == 4) {
        return;
    }
    if ((s->flags[(u32) idx] & 1) == 1) {
        return;
    }
    func_020d59bc(0x15a);
    data_02139fa4->x18 = v;
    g                  = data_02139fa4;
    g->e38             = 0x990;
    g->e3c             = -1;
    g->e40             = 1;
    s->flags[idx] |= 1;
}
