/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct O {
    u8 pad[8];
    s32 n;
    s32 n2;
    u8 a[1];
} O;
void func_0208b3d4(O *o, u8 v) {
    s32 i;
    s32 n = o->n;
    o->n  = 0;
    for (i = 0; i < n; i++) {
        if (v != o->a[i]) {
            o->a[o->n++] = o->a[i];
        }
    }
    o->n2 = o->n;
}
