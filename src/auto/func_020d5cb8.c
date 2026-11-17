/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Args020d5cb8 {
    s32 a;
    s32 b;
    s32 c;
} Args020d5cb8;

typedef struct Unk021424f8 {
    u8 unk0[0xB];
    volatile u8 flags;
} Unk021424f8;

typedef struct Unk02142848 {
    u8 unk0[0xC];
    u32 unkC;
} Unk02142848;

extern Unk021424f8 data_021424f8;
extern Unk02142848 data_02142848;
void func_020d871c(Args020d5cb8);
void func_020d8a70(void);

void func_020d5cb8(Args020d5cb8 args) {
    data_021424f8.flags |= 0x80;
    func_020d871c(args);
    if (!(data_021424f8.flags & 0x80)) {
        return;
    }
    if ((data_021424f8.flags & 0x40) && !(data_02142848.unkC & 0xC)) {
        func_020d8a70();
    }
    data_021424f8.flags &= ~0xC0;
}
