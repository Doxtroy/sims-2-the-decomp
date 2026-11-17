/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Entry027e0014 {
    u8 unk0[0x34];
} Entry027e0014;

typedef struct Unk020cfcec {
    u8 unk0[0x28];
    s32 state;
    u8 unk2C[0xC4 - 0x2C];
    void *bufferA;
    void *bufferB;
} Unk020cfcec;

extern Entry027e0014 data_027e0014[];
extern s32 data_027e0000;
void func_020105d0(void *);
void func_0204681c(void *);

void func_020cfcec(Unk020cfcec *obj) {
    func_020105d0(&data_027e0014[data_027e0000]);
    switch (obj->state) {
        case 3:
        case 4:
            func_0204681c(obj->bufferA);
            break;
        case 6:
            func_0204681c(obj->bufferB);
        case 7:
            func_0204681c(obj->bufferA);
            break;
        case 2:
            func_0204681c(obj->bufferA);
            break;
    }
}
