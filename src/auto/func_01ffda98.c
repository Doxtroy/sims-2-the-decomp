/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Ctx Ctx;

typedef struct {
    u8 pad0[0x18];
    s32 unk18;
    s32 (*unk1C)(s32 *, s32, u32);
    u8 pad20[0x4c - 0x20];
    u32 mask[8];
} Tbl;

struct Ctx {
    u8 *unk0;
    Tbl *unk4;
    u32 unk8;
    u8 padC[0x14 - 0xc];
    void (*unk14)(Ctx *);
    u8 pad18[0x8e - 0x18];
    u8 unk8E;
    u8 pad8F[0xac - 0x8f];
    u8 unkAC;
    u8 padAD[0xb8 - 0xad];
    s32 *unkB8;
    u8 padBC[0x184 - 0xbc];
    s32 unk184;
};

static inline int GetKind(Ctx *p) {
    return p->unk14 != NULL ? p->unk8E : 0;
}

static inline u32 RunHook(Ctx *p, int *kind, int which) {
    if (*kind == which) {
        p->unk8 &= ~0x40;
        p->unk14(p);
        *kind = GetKind(p);
        return p->unk8 & 0x40;
    }
    return 0;
}

void func_01ffda98(Ctx *p) {
    int kind;
    u32 idx;
    Tbl *t;

    if (!(p->unk8 & 0x200)) {
        p->unkAC = p->unk0[1];
        idx      = p->unkAC;
        p->unk8 |= 4;
        p->unkB8 = &p->unk184;
        kind     = GetKind(p);
        if (RunHook(p, &kind, 1) == 0) {
            t = p->unk4;
            if (t->unk18 == 0 || !((1 << (idx & 0x1f)) & t->mask[idx >> 5]) || t->unk1C(p->unkB8, t->unk18, idx) == 0) {
                *p->unkB8 = p->unk0[2] & 1;
            }
        }
        if (RunHook(p, &kind, 2) == 0) {
            if (*p->unkB8 != 0) {
                p->unk8 |= 1;
            } else {
                p->unk8 &= ~1;
            }
        }
        RunHook(p, &kind, 3);
    }
    p->unk0 += 3;
}
