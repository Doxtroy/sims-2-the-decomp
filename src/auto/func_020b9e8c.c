/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Vec2_020b9e8c {
    s32 x;
    s32 y;
} Vec2_020b9e8c;

s32 func_020d59bc(s32);

void func_020b9e8c(u8 *obj, s16 arg1, s32 value, u8 arg3, u8 arg4) {
    volatile Vec2_020b9e8c scale;
    obj[0x2BA]             = 1;
    *(s16 *) (obj + 0x2A8) = arg1;
    scale.x                = value << 12;
    scale.y                = value << 12;
    *(s32 *) (obj + 0x2AC) = value << 12;
    obj[0x2BC]             = arg3;
    obj[0x2BB]             = arg4;
    *(s32 *) (obj + 0x2C0) = func_020d59bc(9);
}
