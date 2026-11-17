/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Unk0213d7b0 {
    u8 unk0[0xA8];
    u8 *cursor;
    s32 bitPos;
} Unk0213d7b0;

extern Unk0213d7b0 data_0213d7b0;
void *func_020462cc(void *, void *, u32);

void func_0204d3a8(void *dst, u32 size) {
    if (data_0213d7b0.bitPos > 0) {
        data_0213d7b0.cursor++;
        data_0213d7b0.bitPos = 0;
    }
    func_020462cc(dst, data_0213d7b0.cursor, size);
    data_0213d7b0.cursor += size;
}
