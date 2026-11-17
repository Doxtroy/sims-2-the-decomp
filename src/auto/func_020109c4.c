/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void func_020d5680(s32, void *);
void func_020109c4(u8 *o) {
    s32 id = 0xce;
    u16 t  = *(u16 *) (o + 0xa);
    if (t == 5) {
        if (o[0x211] == 1) {
            id = 0xd2;
        }
    } else if (t == 6) {
        id = (o[0x211] == 1) ? 0xd3 : 0xe2;
    } else if (t == 0x17) {
        id = (o[0x211] == 1) ? 0x268 : 0xe2;
    } else if (t == 0x1d) {
        id = (o[0x211] == 1) ? 0xcb : 0xe2;
    } else if (t == 0x16) {
        id = (o[0x211] == 1) ? 0x4d : 0x2a0;
    }
    if (id >= 0x2a0) {
        return;
    }
    func_020d5680(id, o + 0x78);
}
