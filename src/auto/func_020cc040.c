/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct E {
    u8 d[0xc4];
} E;
typedef struct V {
    E *begin;
    s32 count;
} V;
void func_02108120(void *, void *, s32);
E *func_020cc040(V *v, E *pos) {
    E *end = v->begin + v->count;
    func_02108120(pos, pos + 1, (end - pos - 1) * sizeof(E));
    v->count--;
    return pos;
}
