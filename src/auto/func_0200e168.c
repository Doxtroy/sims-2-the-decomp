/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Bytes4 {
    u8 b[4];
} Bytes4;

extern Bytes4 data_0212fbb8;

u8 func_0200e168(s32 index) {
    Bytes4 table = data_0212fbb8;
    return table.b[index];
}
