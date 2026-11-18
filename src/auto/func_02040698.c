/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct {
    s32 a;
    s32 b;
} P;
extern const P data_0211e8c0[];
typedef struct {
    u8 pad[0x18];
    u8 x18;
    u8 pad2[0xe38 - 0x19];
    s32 e38;
    s32 e3c;
    u8 e40;
} G;
extern G *data_02139fa4;
void func_0205871c(G *, s32, s32, s32, s32, s32);
typedef struct {
    u8 idx;
    u8 v;
    u8 flag;
} A;
void func_02040698(void *unused, A *a) {
    const P *p         = &data_0211e8c0[a->idx];
    data_02139fa4->x18 = a->v;
    if (a->flag) {
        G *g;
        s32 b;
        s32 x;
        b      = p->b;
        g      = data_02139fa4;
        x      = p->a;
        g->e38 = x;
        g->e3c = b;
        g->e40 = 0;
        return;
    }
    func_0205871c(data_02139fa4, p->a, p->b, 0, 0, 1);
}
