/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Part0204a6ec {
    u8 data[0xC0];
} Part0204a6ec;

extern u32 data_0213d6f8;
extern u32 data_0213d6fc;
extern u8 **data_0213d708;
void func_020b98f4(void *);

void func_0204a6ec(u8 *obj) {
    u32 i;
    for (i = 0; i < obj[0x1CC]; i++) {
        func_020b98f4(&((Part0204a6ec *) (obj + 0x48))[i]);
    }
    for (i = 0; i < data_0213d6f8; i++) {
        if (data_0213d708[i] == obj) {
            data_0213d708[i] = NULL;
            data_0213d6fc--;
            return;
        }
    }
}
