/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Block16_02061d74 {
    s32 a;
    s32 b;
    s32 c;
    s32 d;
} Block16_02061d74;

typedef struct Pair02061d74 {
    u8 a;
    u8 b;
} Pair02061d74;

typedef struct Unk02061d74 {
    s32 unk0;
    Block16_02061d74 unk4;
    Pair02061d74 unk14;
    Pair02061d74 unk16;
    s32 unk18;
    u16 unk1C;
    u8 unk1E;
    u8 unk1F;
    s32 unk20;
} Unk02061d74;

Unk02061d74 *func_02061d74(Unk02061d74 *dst, Unk02061d74 *src) {
    dst->unk0  = src->unk0;
    dst->unk4  = src->unk4;
    dst->unk14 = src->unk14;
    dst->unk16 = src->unk16;
    dst->unk18 = src->unk18;
    dst->unk1C = src->unk1C;
    dst->unk1E = src->unk1E;
    dst->unk1F = src->unk1F;
    dst->unk20 = src->unk20;
    return dst;
}
