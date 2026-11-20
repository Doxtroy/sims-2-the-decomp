/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void *func_02042be4();                      /* extern */
M2C_UNK func_02042c1c();            /* extern */
s32 func_02042e24();               /* extern */
M2C_UNK func_02043230();           /* extern */
s32 func_02044374();                             /* extern */
s32 func_020445a0();                             /* extern */
M2C_UNK func_02046454();                    /* extern */
void *func_0204688c();     /* extern */
s32 func_020ec710();                             /* extern */
M2C_UNK func_020ede74();              /* extern */
M2C_UNK func_020f0dbc();    /* extern */
M2C_UNK func_020f0e2c();    /* extern */
s32 func_020f0e9c();                           /* extern */
void *func_020f0edc();                           /* extern */
M2C_UNK func_020fae94();                    /* extern */
extern M2C_UNK data_02135050;
extern M2C_UNK data_0213509c;
extern s32 data_02139ca4;
extern s32 data_027e0000;
extern s32 data_027e0004;

void func_020bc1a8(void *arg0, u16 arg1) {
    s32 sp4;
    u16 sp0;
    s32 temp_r0_4;
    void *temp_r5;
    s32 var_r4;
    void *temp_r0;
    void *temp_r0_2;
    s32 temp_r0_3;
    void *temp_r1;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_4;
    s32 temp_r5_2;
    s32 nv;

    M2C_FIELD(arg0, u16 *, 0xC) = arg1;
    temp_r5                     = (void *) data_02139ca4;
    sp0                         = M2C_FIELD(arg0, u16 *, 0xC);
    func_02043230(&sp4, temp_r5, &sp0);
    var_r4 = sp4;
    if (var_r4 == func_02044374((u8 *) temp_r5 + 4)) {
        M2C_FIELD(arg0, s32 *, 0) = func_020445a0(M2C_FIELD(arg0, u16 *, 0xC));
        func_020fae94(M2C_FIELD(arg0, s32 *, 0), func_020ec710(M2C_FIELD(arg0, s32 *, 0)) + 0x20);
        M2C_FIELD(arg0, void **, 4) = func_020f0edc(M2C_FIELD(arg0, s32 *, 0));
        temp_r5_2                   = func_020f0e9c(M2C_FIELD(arg0, s32 *, 0));
        temp_r0                     = func_0204688c(0x18, 0, 4);
        if (temp_r0 != NULL) {
            M2C_FIELD(temp_r0, M2C_UNK **, 0) = &data_02135050;
            M2C_FIELD(temp_r0, s32 *, 4)      = 0;
            M2C_FIELD(temp_r0, s32 *, 8)      = 0;
            M2C_FIELD(temp_r0, s32 *, 0xC)    = 0;
            M2C_FIELD(temp_r0, s8 *, 0x10)    = 0;
            M2C_FIELD(temp_r0, s8 *, 0x11)    = 1;
            M2C_FIELD(temp_r0, M2C_UNK **, 0) = &data_0213509c;
            M2C_FIELD(temp_r0, void **, 0x14) = NULL;
        }
        M2C_FIELD(temp_r0, s32 *, 0x14) = temp_r5_2;
        M2C_FIELD(arg0, void **, 8)     = temp_r0;
        func_02042c1c(data_02139ca4, M2C_FIELD(arg0, u16 *, 0xC), M2C_FIELD(arg0, void **, 8));
        var_r4 = 0;
        if (data_027e0004 & (0x20 << data_027e0000)) {
            data_027e0004 |= 0x200;
            var_r4 = 1;
        }
        temp_r0_2 = M2C_FIELD(arg0, void **, 8);
        M2C_FIELD(M2C_FIELD(temp_r0_2, void **, 0), M2C_UNK(**)(void *, s32), 4)(temp_r0_2, var_r4);
        data_027e0004 &= ~0x200;
        if (temp_r5_2 != 0) {
            func_020ede74(M2C_FIELD(arg0, void **, 4), temp_r5_2);
        }
        if ((temp_r5_2 != 0) && (var_r4 == 1)) {
            temp_r0_3 = func_020f0e9c(M2C_FIELD(arg0, s32 *, 0));
            if (temp_r0_3 != 0) {
                temp_r0_4 = M2C_FIELD(arg0, s32 *, 0);
                func_02046454(temp_r0_4, (temp_r0_3 + M2C_FIELD((void *) temp_r0_3, s32 *, 0x14)) - temp_r0_4);
            }
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0)   = func_02042e24(data_02139ca4, M2C_FIELD(arg0, u16 *, 0xC), 1);
        M2C_FIELD(arg0, void **, 4) = func_020f0edc(M2C_FIELD(arg0, s32 *, 0));
        M2C_FIELD(arg0, void **, 8) = func_02042be4(data_02139ca4, M2C_FIELD(arg0, u16 *, 0xC));
        temp_r1                     = M2C_FIELD(arg0, void **, 8);
        if (temp_r1 != NULL) {
            M2C_FIELD(temp_r1, u8 *, 0x11) = (u8) (M2C_FIELD(temp_r1, u8 *, 0x11) + 1);
        }
    }
    if (func_020f0e9c(M2C_FIELD(arg0, s32 *, 0)) != 0) {
        temp_r3 = M2C_FIELD(arg0, void **, 4);
        func_020f0e2c(temp_r3 + M2C_FIELD((temp_r3 + M2C_FIELD(temp_r3, u16 *, 0xE)), s32 *, 0xC), 0, 0x40);
        temp_r3_2 = M2C_FIELD(arg0, void **, 4);
        func_020f0e2c(temp_r3_2 + M2C_FIELD((temp_r3_2 + M2C_FIELD(temp_r3_2, u16 *, 0xE)), s32 *, 0xC), 0, 0x80);
    }
    temp_r3_3 = M2C_FIELD(arg0, void **, 4);
    func_020f0dbc(temp_r3_3 + M2C_FIELD((temp_r3_3 + M2C_FIELD(temp_r3_3, u16 *, 0xE)), s32 *, 0xC), 0, 0x3F000000);
    temp_r3_4 = M2C_FIELD(arg0, void **, 4);
    func_020f0dbc(temp_r3_4 + M2C_FIELD((temp_r3_4 + M2C_FIELD(temp_r3_4, u16 *, 0xE)), s32 *, 0xC), 0, 0x8000);
}
