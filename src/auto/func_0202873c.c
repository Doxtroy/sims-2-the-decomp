/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Vec3_0202873c {
    s32 x;
    s32 y;
    s32 z;
} Vec3_0202873c;

typedef struct Vec2_0202873c {
    s32 y;
    s32 z;
} Vec2_0202873c;

extern Vec3_0202873c data_02139408;
void func_02018ad0(void *);
void func_02018aa0(void *, s32);

u8 *func_0202873c(u8 *obj) {
    volatile Vec2_0202873c copy;
    Vec3_0202873c *src;
    s32 value;
    func_02018ad0(obj);
    *(s32 *) (obj + 0x18) = 0;
    *(s32 *) (obj + 0x1C) = 0;
    *(s32 *) (obj + 0x20) = 0;
    func_02018aa0(obj, 0x2D);
    *(u16 *) (obj + 0x10) = 0x2A;
    *(u16 *) (obj + 0x12) = 0x2A0;
    src                   = &data_02139408;
    *(s32 *) (obj + 0x18) = src->x;
    value                 = src->y;
    copy.y                = value;
    *(s32 *) (obj + 0x1C) = value;
    value                 = src->z;
    copy.z                = value;
    *(s32 *) (obj + 0x20) = value;
    *(s32 *) (obj + 0x24) = 0;
    obj[0x14]             = 0;
    return obj;
}
