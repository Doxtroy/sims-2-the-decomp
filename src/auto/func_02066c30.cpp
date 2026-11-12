/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct {
    u16 v;
} S16;
extern "C" {
void func_0203d208(s32, S16);

void func_02066c30(u8 *arg0) {
    s32 idx;

    if (arg0[0x108] == 0) {
        return;
    }
    if (arg0[0x109] == 0) {
        return;
    }
    arg0[0xE4] = (arg0[0xE4] == 0);
    idx        = arg0[0xE4];
    func_0203d208(3, *(S16 *) (arg0 + idx * 2 + 0xC0));
}
}
