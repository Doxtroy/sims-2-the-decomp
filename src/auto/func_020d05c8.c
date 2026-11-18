/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"
void func_02046384(void *, s32, u32);
typedef struct E {
    u8 pad[8];
    u8 x8;
    u8 pad9[0x21 - 9];
    u8 a : 2;
    u8 b : 2;
    u8 c : 2;
    u8 d : 2;
    u8 pad22[2];
} E;
typedef struct G {
    u8 pad[0x3c];
    E arr[1];
} G;
extern G *data_021424d4;
void func_020d05c8(u32 idx) {
    E *e;
    if (idx == 0xff) {
        return;
    }
    e = &data_021424d4->arr[idx];
    func_02046384(e, 0, sizeof(E));
    e->x8 = 0xff;
    e->a  = 0;
    e->b  = 0;
    e->c  = 0;
}
