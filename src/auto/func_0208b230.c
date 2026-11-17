/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Info0208b230 {
    u8 unk0[0xA];
    u16 id;
    u16 type;
} Info0208b230;

typedef struct Unk0208b230 {
    s32 unk0;
    Info0208b230 *info;
} Unk0208b230;

s32 func_0208afe8(s32);
s32 func_0208afd0(s32);

s32 func_0208b230(Unk0208b230 *obj) {
    s32 result = 0;
    switch (obj->info->type) {
        case 2:
            result = func_0208afe8(obj->info->id);
            break;
        case 11:
            result = func_0208afd0(obj->info->id);
            break;
    }
    return result;
}
