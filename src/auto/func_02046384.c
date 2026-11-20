/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020fcad0(u32 value, void *dst, u32 size);

void *func_02046384(void *dst, s32 c, u32 n) {
    u32 rest;
    u8 *p;
    u32 words;
    u32 i;
    u32 j;
    u32 k;
    u32 head;
    u32 v;

    v = c;
    v = v | (v << 8);
    v = v | (v << 16);
    if (((u32) dst & 3) == 0 && (n & 3) == 0) {
        volatile u32 t = v;
        func_020fcad0(t, dst, n);
    } else {
        head = 4 - ((s32) dst & 3);
        p    = dst;
        if (head != 4) {
            if (n < head) {
                head = n;
            }
            for (i = 0; i < head; i++) {
                p[i] = (u8) c;
            }
            n -= i;
            p += i;
        }
        words = n >> 2;
        for (j = 0; j < words; j++) {
            ((u32 *) p)[j] = v;
        }
        p += j * 4;
        rest = n & 3;
        for (k = 0; k < rest; k++) {
            p[k] = (u8) c;
        }
    }
    return dst;
}
