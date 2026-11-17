/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Unk0201ddcc_C {
    u8 unk0[0x1C];
    u8 flag;
} Unk0201ddcc_C;

typedef struct Unk0201ddcc_B {
    u8 unk0[0x130];
    Unk0201ddcc_C *c;
} Unk0201ddcc_B;

typedef struct Unk0201ddcc_A {
    s32 unk0;
    Unk0201ddcc_B *b4;
    u8 unk8[0x20];
    Unk0201ddcc_B *b28;
    u8 unk2C[0x18];
    s32 unk44;
    s32 unk48;
    s32 unk4C;
    s32 unk50;
    u8 unk54;
} Unk0201ddcc_A;

void func_0201ddcc(Unk0201ddcc_A *a) {
    a->unk4C = 0;
    a->unk50 = a->unk44;
    if (a->b28 == NULL) {
        a->b28 = a->b4;
    }
    a->unk54 = a->b28->c != NULL && a->b28->c->flag != 0;
}
