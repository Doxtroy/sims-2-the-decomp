/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Header0203de20 {
    u16 type : 2;
    u16 unk0_2 : 14;
} Header0203de20;

Header0203de20 *func_02044538(s32);
void func_020fca70(void *, s32, s32);

void func_0203de20(s32 dst, s32 resource, s32 offset, s32 count) {
    Header0203de20 *header = func_02044538(resource);
    s32 size;
    switch (header->type) {
        case 0:
            size = 0;
            break;
        case 1:
            size = 0x200;
            break;
        case 2:
            size = 0x20;
            break;
        default:
            size = 0;
            break;
    }
    if (size >= count * 2) {
        size = count * 2;
    }
    func_020fca70((u16 *) (header + 1) + offset, dst, size);
}
