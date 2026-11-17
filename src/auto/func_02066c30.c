/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct {
    u16 v;
} U16One;
typedef struct O {
    u8 pad[0xc0];
    U16One c0[2];
    u8 padc4[0xe4 - 0xc4];
    u8 e4;
    u8 pade5[0x108 - 0xe5];
    u8 x108;
    u8 x109;
} O;
void func_0203d208(s32, U16One);
void func_02066c30(O *o) {
    if (o->x108 == 0) {
        return;
    }
    if (o->x109 == 0) {
        return;
    }
    o->e4 = (o->e4 == 0) ? 1 : 0;
    func_0203d208(3, o->c0[o->e4]);
}
