/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u32 w[4];
} Q;
typedef struct {
    u8 a, b;
} P;
typedef struct {
    u32 id;
    Q q;
    P p0;
    P p1;
    u32 v;
    u16 h;
    u8 used;
    u8 flag;
    u32 x;
} E;
typedef struct {
    u8 dirty;
    u8 pad[7];
    E e[10];
    u8 pad2[0x194 - 0x170];
    u8 b194;
} M;

void func_0205e2d8(M *m, E *src) {
    u8 i;
    for (i = 0; i < 10; i++) {
        if (m->e[i].used == 0) {
            m->e[i].id   = src->id;
            m->e[i].q    = src->q;
            m->e[i].p0   = src->p0;
            m->e[i].p1   = src->p1;
            m->e[i].v    = src->v;
            m->e[i].h    = src->h;
            m->e[i].used = src->used;
            m->e[i].flag = src->flag;
            m->e[i].x    = src->x;
            m->e[i].flag = 0;
            m->dirty     = 1;
            m->b194      = 0;
            return;
        }
    }
}
