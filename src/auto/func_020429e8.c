/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u32 lo : 4;
    u32 type : 4;
    u32 size : 24;
} Hdr;

void func_020fae94(const void *, u32);
void func_020fc5fc(u32, const void *, void *, u32);
void func_020fcdcc(const void *, void *);
void func_020fcf7c(const void *, void *);
void func_01ff8000(const void *, void *, u32 *);

u32 func_020429e8(const Hdr *src, u16 *dst) {
    u32 size;
    u32 i;
    u32 type = src->type & ~8;
    size     = src->size;

    switch (type) {
        case 0:
            func_020fae94(src, size + 4);
            func_020fc5fc(3, src + 1, dst, size);
            break;
        case 1:
            func_020fcdcc(src, dst);
            break;
        case 3:
            func_020fcf7c(src, dst);
            break;
        case 6:
            func_01ff8000(src + 1, dst, &size);
            break;
        case 8:
            break;
    }
    if (src->type & 8) {
        u32 n = size >> 1;
        for (i = 1; i < n; i++) {
            dst[i] += dst[i - 1];
        }
    }
    return src->size;
}
