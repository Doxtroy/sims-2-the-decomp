/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Unk0213d91c {
    s32 enabled;
    s32 value;
    s32 mask;
    s32 unkC[5];
} Unk0213d91c;

extern Unk0213d91c data_0213d91c[2];

void func_0204efa8(void) {
    data_0213d91c[0].mask    = 0x3F;
    data_0213d91c[0].enabled = 1;
    data_0213d91c[0].value   = 0;
    data_0213d91c[1].mask    = 0x3F;
    data_0213d91c[1].enabled = 1;
    data_0213d91c[1].value   = 0;
}
