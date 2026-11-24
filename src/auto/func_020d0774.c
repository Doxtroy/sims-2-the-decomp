/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

typedef struct Ent {
    u8 pad[0xd];
    u8 bits : 2;
    u8 rest : 6;
    u8 pad2[0x20 - 0xe];
} Ent;

typedef struct G {
    u8 pad[0x38];
    u8 cur;
    u8 target;
    u8 step;
    u8 key;
    u8 pad2[0x940 - 0x3c];
    Ent ents[1];
} G;

typedef struct H {
    u8 pad[0x10];
    u8 count;
    u8 pad2[0x634 - 0x11];
    u8 keys[1];
} H;

typedef struct S18 {
    s32 p;
    u8 pad[0x14];
} S18;

extern G *data_021424d4;
extern H data_02142848;
extern S18 data_02142548[];

void func_020d0774(void) {
    s32 i;
    u8 step;
    u8 target;
    u8 cur;

    step = data_021424d4->step;
    if (step == 0) {
        return;
    }
    target = data_021424d4->target;
    cur    = data_021424d4->cur;
    if (cur > target) {
        if (cur - step <= target) {
            data_021424d4->cur  = target;
            data_021424d4->step = 0;
        } else {
            data_021424d4->cur -= step;
        }
    } else if (cur < target) {
        if (cur + step >= target) {
            data_021424d4->cur  = target;
            data_021424d4->step = 0;
        } else {
            data_021424d4->cur += step;
        }
    } else {
        data_021424d4->step = 0;
    }
    for (i = data_02142848.count - 1; i >= 0; i--) {
        if (data_021424d4->key == data_02142848.keys[i] && data_02142548[i].p != 0) {
            data_021424d4->ents[i].bits |= 2;
        }
    }
}
