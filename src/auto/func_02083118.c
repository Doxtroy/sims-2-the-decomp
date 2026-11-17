/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void *func_0204688c(s32, s32, s32);
void *func_02049ed4(void *, void *, void *, s32);

void func_02083118(void **out) {
    u16 id;
    s32 params[3];
    void *p;
    params[0] = 0;
    params[1] = 0;
    params[2] = 0;
    id        = 0x1D92;
    p         = func_0204688c(0x1D0, 3, 4);
    if (p != NULL) {
        p = func_02049ed4(p, params, &id, 1);
    }
    *out = p;
}
