/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Target0203138c {
    u8 unk0[0x14];
    s32 speed;
} Target0203138c;

typedef struct Unk0203138c {
    u8 unk0[0x28];
    Target0203138c *target;
    u8 state;
    u8 timer;
} Unk0203138c;

typedef struct Vec2_0203138c {
    s32 x;
    s32 y;
} Vec2_0203138c;

void func_0203138c(Unk0203138c *obj) {
    volatile Vec2_0203138c copy1;
    volatile Vec2_0203138c copy2;
    switch (obj->state) {
        case 0:
            return;
        case 1:
            copy1.x            = 0x2AA;
            copy2.x            = 0x2AA;
            obj->target->speed = 0x2AA;
            obj->timer--;
            if (obj->timer == 0) {
                obj->state = 0;
            }
            break;
        case 2:
            copy1.y            = -0x2AA;
            copy2.y            = -0x2AA;
            obj->target->speed = -0x2AA;
            obj->timer--;
            if (obj->timer == 0) {
                obj->state = 0;
            }
            break;
    }
}
