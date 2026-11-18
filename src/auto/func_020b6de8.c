/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02046384(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_020b64e8();                            /* extern */
M2C_UNK func_020b6718();                            /* extern */
M2C_UNK func_020b6948();                            /* extern */
M2C_UNK func_020b6c18();                            /* extern */
M2C_UNK func_020bbde8(s32, M2C_UNK, s32, M2C_UNK, s32); /* extern */
extern void *data_0213e434;
extern void *data_0213f968;
extern s32 data_0213f96c;

void func_020b6de8(void) {
    s32 temp_r0;
    s32 temp_r1;
    s32 temp_r2;

    func_02046384(data_0213f96c, 0, 0x1000);
    M2C_FIELD(data_0213f968, s32 *, 0x38) = (s32) M2C_FIELD(data_0213f968, s32 *, 0x34);
    temp_r1                               = M2C_FIELD(data_0213f968, s32 *, 0x34);
    switch (temp_r1) {                              /* switch 1; irregular */
        case 0:                                         /* switch 1 */
            M2C_FIELD(data_0213f968, s32 *, 0xC) = (s32) (M2C_FIELD(data_0213f968, s32 *, 0xC) - 1);
            if ((s32) M2C_FIELD(data_0213f968, s32 *, 0xC) <= 0) {
                M2C_FIELD(data_0213f968, s32 *, 0xC)  = (s32) M2C_FIELD(data_0213f968, s32 *, 0x10);
                M2C_FIELD(data_0213f968, s32 *, 0x40) = (s32) (M2C_FIELD(data_0213f968, s32 *, 0x40) + 1);
                if ((s32) M2C_FIELD(data_0213f968, s32 *, 0x40) >= 4) {
                    M2C_FIELD(data_0213f968, s32 *, 0x40) = 0;
                }
                M2C_FIELD(data_0213f968, s32 *, 0x3C) = (s32) (M2C_FIELD(data_0213f968, s32 *, 0x3C) - 1);
                if ((s32) M2C_FIELD(data_0213f968, s32 *, 0x3C) <= 0) {
                    M2C_FIELD(data_0213f968, s32 *, 0x34) = 1;
                }
            }
            func_020b6718();
            break;
        case 1:                                         /* switch 1 */
            func_020b6c18();
            func_020b6948();
            break;
        case 2:                                         /* switch 1 */
            M2C_FIELD(data_0213f968, s32 *, 0xC) = (s32) (M2C_FIELD(data_0213f968, s32 *, 0xC) - 1);
            if ((s32) M2C_FIELD(data_0213f968, s32 *, 0xC) <= 0) {
                M2C_FIELD(data_0213f968, s32 *, 0xC)  = (s32) M2C_FIELD(data_0213f968, s32 *, 0x10);
                M2C_FIELD(data_0213f968, s32 *, 0x3C) = (s32) (M2C_FIELD(data_0213f968, s32 *, 0x3C) + 1);
                M2C_FIELD(data_0213f968, s32 *, 0x40) = (s32) (M2C_FIELD(data_0213f968, s32 *, 0x40) - 1);
                temp_r0                               = M2C_FIELD(data_0213f968, s32 *, 0x40);
                if ((temp_r0 >= 4) || (temp_r0 < 0)) {
                    M2C_FIELD(data_0213f968, s32 *, 0x40) = 3;
                }
                if ((s32) M2C_FIELD(data_0213f968, s32 *, 0x3C) >= 4) {
                    M2C_FIELD(data_0213f968, s32 *, 0x34) = 0;
                }
            }
            func_020b64e8();
            break;
    }
    temp_r2 = M2C_FIELD(data_0213f968, s32 *, 0x34);
    if (M2C_FIELD(data_0213f968, s32 *, 0x38) != temp_r2) {
        switch (temp_r2) {                          /* switch 2; irregular */
            case 0:                                     /* switch 2 */
                M2C_FIELD(data_0213f968, s32 *, 0x3C) = 4;
                M2C_FIELD(data_0213f968, s32 *, 0x10) = 0xA;
                M2C_FIELD(data_0213f968, s32 *, 0xC)  = (s32) M2C_FIELD(data_0213f968, s32 *, 0x10);
                M2C_FIELD(data_0213f968, s32 *, 0x40) = 0;
                break;
            case 1:                                     /* switch 2 */
                M2C_FIELD(data_0213f968, s32 *, 8)    = 0x10;
                M2C_FIELD(data_0213f968, s32 *, 0x14) = 0;
                M2C_FIELD(data_0213f968, s32 *, 0x10) = 5;
                M2C_FIELD(data_0213f968, s32 *, 0xC)  = (s32) M2C_FIELD(data_0213f968, s32 *, 0x10);
                M2C_FIELD(data_0213f968, s32 *, 0x18) = 1;
                M2C_FIELD(data_0213f968, s32 *, 0x20) = 0;
                M2C_FIELD(data_0213f968, s32 *, 0x44) = 0xA;
                break;
            case 2:                                     /* switch 2 */
                M2C_FIELD(data_0213f968, s32 *, 0x3C) = 0;
                M2C_FIELD(data_0213f968, s32 *, 0x10) = 2;
                M2C_FIELD(data_0213f968, s32 *, 0xC)  = (s32) M2C_FIELD(data_0213f968, s32 *, 0x10);
                break;
        }
    }
    if (M2C_FIELD(data_0213f968, u8 *, 0x48) == 0) {
        if (M2C_FIELD(data_0213f968, s32 *, 0x1C) >= M2C_FIELD(data_0213e434, s32 *, 0x4690)) {
            M2C_FIELD(data_0213e434, s32 *, 0x4690) = M2C_FIELD(data_0213f968, s32 *, 0x1C);
        }
    }
    func_020bbde8(M2C_FIELD(data_0213f968, s32 *, 0) + 0x1A4, 1, data_0213f96c, 0x1000, 0);
}
