/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u8 id;
    u8 b;
    u16 c;
} Ent;
typedef struct {
    u8 pad[0x84];
    Ent e[2];
} Obj;

void func_0208297c(Obj *o, u8 id, s32 c, u8 b) {
    Ent *e = NULL;
    u32 i;
    u32 j;
    for (i = 0; i < 2; i++) {
        if (id == o->e[i].id) {
            e = &o->e[i];
            break;
        }
    }
    if (e == NULL) {
        for (j = 0; j < 2; j++) {
            if (o->e[j].id == 0x3f) {
                e = &o->e[j];
                break;
            }
        }
    }
    if (e == NULL) {
        return;
    }
    if (c == 0x14b) {
        e->id = 0x3f;
        e->c  = 0x14b;
        e->b  = 0;
        return;
    }
    e->id = id;
    e->c  = c;
    e->b  = b;
}
