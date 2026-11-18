/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0204fd48(u8 *map, s32 count, u32 pos) {
    s32 left  = 1;
    u32 start = 0;
    u32 b;
    u32 bit;

    while (pos + count <= 0x400 && left > 0) {
        start = pos;
        for (left = count; left > 0;) {
            b = map[pos >> 3];
            if (b == 0xFF) {
                pos += 8;
                break;
            }
            if (b == 0) {
                pos += 8;
                left -= 8;
            } else {

                for (bit = pos & 7;;) {
                    pos++;
                    if (b & (1 << bit)) {
                        goto next;
                    }
                    bit++;
                    left--;
                    if (bit >= 8 || left <= 0) {
                        break;
                    }
                }
            }
        }
    next:;
    }
    if (left <= 0) {
        return start;
    }
    return 0xFFFF;
}
