/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u32 data_0213d6f8;
extern u32 data_0213d6fc;
extern void **data_0213d708;

void func_0204aaac(void *item) {
    u32 i;
    if (data_0213d6fc == data_0213d6f8) {
        return;
    }
    data_0213d6fc++;
    for (i = 0; i < data_0213d6f8; i++) {
        if (data_0213d708[i] == NULL) {
            data_0213d708[i] = item;
            return;
        }
    }
}
