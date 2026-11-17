/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u8 pad[8];
    s16 f8;
} S14;

typedef struct {
    u8 pad[0x44c0];
    s32 v;
} Big;

extern S14 data_02134014;
extern Big *data_0213e434;

S14 *func_02092c4c(void) {
    data_02134014.f8 = data_0213e434->v + 0x7A8;
    return &data_02134014;
}
