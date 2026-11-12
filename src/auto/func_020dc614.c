#include "m2c.h"

M2C_UNK func_020dc314();             /* extern */
M2C_UNK func_020de890();                      /* extern */
M2C_UNK func_020df908();                         /* extern */
M2C_UNK func_02108108();    /* extern */

void func_020dc614(void *arg0) {
    s32 var_r4;
    u32 var_r5;

    if (arg0 == NULL) {
        return;
    }
    func_020dc314(arg0, 1);
    var_r5 = 0;
    {
        u32 nz   = (u32) M2C_FIELD(arg0, u32 *, 0x2E8);
        u32 zero = 0;
        if (nz > zero) {
            var_r4 = 0;
            do {
                {
                    u8 *obj;
                    void *fp;
                    obj = (u8 *) (*(u8 **) ((u8 *) arg0 + 0x2F0)) + var_r4;
                    fp  = *(void **) (obj + 0x1C);
                    ((void (*)(void *)) fp)(obj);
                }
                func_020df908(M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x2F0) + var_r4), s32 *, 0x3C));
                if (M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x2F0) + var_r4), s32 *, 0x2C) != 0) {
                    func_020de890();
                }
                var_r5 += 1;
                var_r4 += 0x17C;
            } while (var_r5 < (u32) M2C_FIELD(arg0, u32 *, 0x2E8));
        }
    }
    {
        s32 e8 = M2C_FIELD(arg0, s32 *, 0xE8);
        s32 fl;
        if (e8 != 0) {
            fl = M2C_FIELD(arg0, s32 *, 0x20) & 0x04000000;
            if (fl == 0) {
                func_020de890(e8, fl);
            }
        } else {
            M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x104)(arg0 + 0xF0);
            func_020de890(M2C_FIELD(arg0, void **, 0x234));
        }
    }
    if (M2C_FIELD(arg0, s32 *, 0x384) != 0) {
        func_020de890();
    }
    func_02108108(arg0, 0, 0x388);
    func_020de890(arg0);
}
