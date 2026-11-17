/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0204a550(void *);
void func_02046844(void *);

void func_020831c0(void **slots) {
    u8 i;
    for (i = 0; i < 2; i++) {
        void *p = slots[i];
        if (p != NULL) {
            if (p != NULL) {
                func_0204a550(p);
                func_02046844(p);
            }
        }
        slots[i] = NULL;
    }
}
