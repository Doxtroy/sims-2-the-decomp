/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void func_020d64d0(u32 a);
typedef struct {
    s32 p0;
    u8 p5[2];
    u8 vol;
    u8 p7;
    u16 gen;
    u8 id;
    u8 low : 1;
    u8 st : 6;
    u8 top : 1;
    u8 pad[0x44 - 0xc];
} Ent;
extern Ent data_021428f4[];
static inline s32 IsValid(u32 h) {
    Ent *e;
    if (h != 0xffffffff) {
        e = &data_021428f4[h & 0xff];
        if ((h & 0xff) < 0x10 && e->p0 != 0 && e->gen == (h >> 8) && e->st <= 1) {
            return 1;
        }
    }
    return 0;
}
void func_020d72dc(u32 arg0, s32 vol) {
    if (vol > 0x40) {
        vol = 0x40;
    }
    if (vol < 0) {
        vol = 0;
    }
    if (!IsValid(arg0)) {
        return;
    }
    data_021428f4[arg0 & 0xff].vol = vol;
    func_020d64d0(arg0);
}
