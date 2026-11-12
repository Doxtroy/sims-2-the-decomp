/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0204a550(void *p);
void func_02046844(void *p);

void func_020831c0(void **arg0) {
    void *z;
    u8 i;
    void *p;
    volatile s32 pad;

    i = 0;
    z = 0;
    do {
        p = arg0[i];
        if (p != NULL) {
            if (p != NULL) {
                func_0204a550(p);
                func_02046844(p);
            }
        }
        arg0[i] = z;
        i       = i + 1;
    } while (i < 2);
}
