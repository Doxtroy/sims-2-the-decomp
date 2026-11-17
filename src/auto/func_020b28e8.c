/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Vec3_020b28e8 {
    s32 x;
    s32 y;
    s32 z;
} Vec3_020b28e8;

s32 func_020b28e8(Vec3_020b28e8 *a, Vec3_020b28e8 *b) {
    volatile Vec3_020b28e8 copy;
    s32 x;
    s32 y;
    s32 z;
    if (a->x != (x = b->x, copy.x = x, x) || a->y != (y = b->y, copy.y = y, y) || a->z != (z = b->z, copy.z = z, z)) {
        return 1;
    }
    return 0;
}
