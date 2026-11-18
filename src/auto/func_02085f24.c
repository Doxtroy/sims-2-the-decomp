/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Sub {
    u16 id;
    u16 pad;
    s32 a;
    s32 b;
    s32 c;
} Sub;

typedef struct Elem {
    u8 f0;
    u8 pad1;
    u16 h2;
    u16 h4;
    u16 pad6;
    Sub subs[3];
} Elem;

typedef struct O {
    s32 arr[2];
    Elem e[2];
} O;

O *func_02085f24(O *o) {
    s32 i;
    Elem *e;
    e = o->e;
    do {
        Sub *s;
        e->h2 = 0xffff;
        e->h4 = 0xffff;
        s     = e->subs;
        do {
            s->id = 0xffff;
            s->a  = 0;
            s->b  = 0;
            s->c  = 0;
            s++;
        } while (s != e->subs + 3);
        e++;
    } while (e != o->e + 2);
    for (i = 0; i < 2; i++) {
        o->arr[i]  = 0;
        o->e[i].f0 = 0;
    }
    return o;
}
