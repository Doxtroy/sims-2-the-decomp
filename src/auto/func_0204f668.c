/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Rect0204f668 {
    u16 x;
    u16 y;
    u16 w;
    u16 h;
} Rect0204f668;

static inline s32 PointInRect(u16 x, u16 y, u16 rx, u16 ry, u16 rw, u16 rh) {
    if (x >= rx && x < rx + rw && y >= ry && y < ry + rh) {
        return 1;
    }
    return 0;
}

s32 func_0204f668(u8 *obj, Rect0204f668 *rect, s32 useHistory, s32 index) {
    u16 x, y;
    if (useHistory) {
        s32 slot = obj[0x55] - 1;
        u8 *entry;
        if (slot < 0) {
            slot += 5;
        }
        entry = obj + slot * 2;
        if (entry[0x4A] != 0xFF) {
            x = entry[0x4A];
            y = entry[0x4B];
        }
    } else {
        u8 *item = obj + index * 8;
        x        = *(u16 *) (item + 0x2A);
        y        = *(u16 *) (item + 0x2C);
    }
    return PointInRect(x, y, rect->x, rect->y, rect->w, rect->h) ? 1 : 0;
}
