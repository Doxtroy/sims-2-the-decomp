/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0204a550(void *);
void func_02046844(void *);
void func_0204ac54(s32, s32);

void func_02083290(void **arg0) {
    u8 i;
    void *p;

    i = 0;
    do {
        p = arg0[i];
        if (p != NULL) {
            if (p != NULL) {
                func_0204a550(p);
                func_02046844(p);
            }
        }
        arg0[i] = NULL;
        i       = i + 1;
    } while (i < 2);
    func_0204ac54(2, 80);
}
