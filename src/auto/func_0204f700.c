/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct Pts_0204f700 {
    s16 x;
    s16 y;
} Pts_0204f700;
typedef struct Rect_0204f700 {
    u16 x;
    u16 y;
    u16 w;
    u16 h;
} Rect_0204f700;
static inline s32 contains(u16 x, u16 y, u16 rx, u16 ry, u16 rw, u16 rh) {
    if (x >= rx && x < rx + rw && y >= ry && y < ry + rh) {
        return 1;
    }
    return 0;
}
s32 func_0204f700(s32 unused, Pts_0204f700 p, Rect_0204f700 *r, s32 n, s32 *out) {
    s32 i;
    for (i = 0; n != 0; n--, i++, r++) {
        if (contains(p.x, p.y, r->x, r->y, r->w, r->h)) {
            *out = i;
            return 1;
        }
    }
    *out = -1;
    return 0;
}
