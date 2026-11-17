/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 data_02139ca4;
void func_02042d60(s32, s32);

void func_020444f8(s32 id) {
    if (id == 0xFFFF) {
        return;
    }
    func_02042d60(data_02139ca4, id);
}
