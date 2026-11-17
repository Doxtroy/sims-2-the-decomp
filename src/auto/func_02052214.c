/* compiler: 1.2/sp2p3 */
#include "m2c.h"

u8 *func_02052214(u8 *dst, const u8 *src) {
    u8 *p = dst;
    while (*p) {
        p++;
    }
    while (*src) {
        *p++ = *src++;
    }
    *p = *src;
    return dst;
}
