/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02010a80(void *);
void func_02011090(void *, s32, s32, s32, s32);

void func_02010c28(u8 *obj) {
    u8 state = obj[0x211];
    if (state == 0) {
        func_02010a80(obj);
        func_02011090(obj, 0x87, 0, 1, 0);
        obj[0x211] = 3;
    } else if (state == 1) {
        *(u16 *) (obj + 0x1F8) &= ~8;
        obj[0x211] = 3;
    } else if (state == 2) {
        obj[0x212] = 0x1E;
    }
}
