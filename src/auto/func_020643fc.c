/* compiler: 1.2/sp2p3 */
#include "m2c.h"
s32 func_0207355c(void *, s32);
void func_0209b838(void *);
void func_020d5680(s32, void *);
void func_020643fc(u8 *obj, u8 *arg) {
    u8 id;
    if (func_0207355c(obj + 0x41f8, arg[0x19]) != 0 || *(s32 *) (obj + 0x4418 + arg[0x19] * 4) > *(s32 *) (obj + 0x480c)) {
        obj[0x4820] = 0x21;
        func_0209b838(arg);
        return;
    }
    id = arg[0x19];
    if (obj[0x4820] == id) {
        return;
    }
    if (id == 0x1c) {
        return;
    }
    if (id == 0x15) {
        return;
    }
    obj[0x4820] = id;
    func_020d5680(0xcc, arg);
}
