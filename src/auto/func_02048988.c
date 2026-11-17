/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Vec2_02048988 {
    s32 x;
    s32 y;
} Vec2_02048988;

typedef struct Rect02048988 {
    s32 x;
    s32 y;
    s32 x2;
    s32 y2;
} Rect02048988;

void func_02048988(Rect02048988 *rect, volatile Vec2_02048988 pos) {
    volatile Vec2_02048988 delta;
    volatile Vec2_02048988 delta2;
    volatile Vec2_02048988 newPos;
    volatile Vec2_02048988 oldPos;
    s32 d;
    s32 old;
    s32 cur;
    old      = rect->x;
    cur      = pos.x;
    oldPos.x = old;
    d        = cur - old;
    delta.x  = d;
    delta2.x = d;
    rect->x2 += d;
    old      = rect->y;
    cur      = pos.y;
    oldPos.y = old;
    d        = cur - old;
    delta.y  = d;
    delta2.y = d;
    rect->y2 += d;
    cur      = pos.x;
    newPos.x = cur;
    rect->x  = cur;
    cur      = pos.y;
    newPos.y = cur;
    rect->y  = cur;
}
