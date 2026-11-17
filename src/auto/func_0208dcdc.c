/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Info0208dcdc {
    u8 unk0[0xA];
    u16 id;
} Info0208dcdc;

typedef struct Unk0208dcdc {
    s32 unk0;
    Info0208dcdc *info;
} Unk0208dcdc;

extern u8 *data_0213e434;
void func_020509ac(s32);
s32 func_0208afd0(s32);

void func_0208dcdc(Unk0208dcdc *obj) {
    s32 count = 0;
    s32 i;
    for (i = 0; i < 6; i++) {
        if (((u16 *) (data_0213e434 + 0x28))[i] == 0x131) {
            count++;
        }
    }
    func_020509ac(count);
    func_0208afd0(obj->info->id);
}
