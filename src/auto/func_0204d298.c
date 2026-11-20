/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Unk0213d7b0 {
    u8 unk0[0xA8];
    u8 *cursor;
    s32 bitPos;
} Unk0213d7b0;

extern Unk0213d7b0 data_0213d7b0;
void *func_020462cc(void *, void *, u32);

void func_0204d298(void *src, u32 size) {
    if (data_0213d7b0.bitPos > 0) {
        *data_0213d7b0.cursor &= 0xFF >> (8 - data_0213d7b0.bitPos);
        data_0213d7b0.cursor++;
        data_0213d7b0.bitPos = 0;
    }
    func_020462cc(data_0213d7b0.cursor, src, size);
    data_0213d7b0.cursor += size;
}
