/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct OamEntry020490e4 {
    u32 attr01;
    u32 attr2;
} OamEntry020490e4;

extern s32 data_027e0000;
extern u8 data_0213c239[];
extern u8 data_0213af10[];
extern u8 *data_027e00c4;

void func_020490e4(void) {
    s32 offset             = data_027e0000 * 0x132C;
    u32 i                  = data_0213c239[offset];
    OamEntry020490e4 *main = *(OamEntry020490e4 **) (data_0213af10 + offset);
    OamEntry020490e4 *sub  = (OamEntry020490e4 *) ((u8 *) main + 0x400);
    OamEntry020490e4 *p    = &main[i];
    OamEntry020490e4 *q    = &sub[i];
    for (; i < 0x80; i++) {
        p->attr01 = (p->attr01 & ~0x300) | 0x200;
        q->attr01 = (q->attr01 & ~0x300) | 0x200;
        p++;
        q++;
    }
    (data_027e00c4 + data_027e0000)[0x2D] = 1;
}
