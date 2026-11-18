/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020ecfa8(s32 kind, u32 addr, void *src, u32 size);

typedef struct R {
    void *p0;
    void *p4;
    u16 h8;
    u16 pada;
    u32 padc;
    u32 x10;
} R;

typedef struct O {
    u32 x0;
    u32 x4;
    u32 x8;
    u32 xc;
    u32 x10;
    R *x14;
} O;

s32 func_020be39c(O *o) {
    if (o->x14 != NULL) {
        if (o->x14->h8 != 0) {
            func_020ecfa8(1, (o->xc & 0xffff) << 3, o->x14->p4, o->x14->h8);
        }
        if (o->x14->x10 != 0) {
            func_020ecfa8(0, (o->x4 & 0xffff) << 3, o->x14->p0, o->x14->x10);
        }
    }
    return 1;
}
