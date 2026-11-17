/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct BitStream {
    u32 pos;
    u32 size;
    u8 *buf;
} BitStream;

void func_0203d584(BitStream *bs, u32 bit) {
    u32 pos       = bs->pos;
    u8 *buf       = bs->buf;
    u32 shift     = pos & 7;
    u8 byte       = buf[pos >> 3];
    buf[pos >> 3] = (u8) (byte & ~(1 << shift)) | (bit << shift);
    bs->pos++;
}
