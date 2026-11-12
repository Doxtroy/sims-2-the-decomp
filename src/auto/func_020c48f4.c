/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020c8cec();
M2C_UNK func_020fcc70();
M2C_UNK func_020fae94();
M2C_UNK func_020fbf10();
M2C_UNK func_02105774();
M2C_UNK func_020c4b50();
extern s32 data_0214019c;
extern s32 data_02135b84[];
extern s32 data_021401a8;
extern u8 data_02140160;
extern u8 data_02135c6c;
extern u8 data_02135c74;
extern u8 data_021402e0;
extern u8 data_02136580;
extern u8 data_021354e8;
extern s32 data_02140190;
extern s32 data_021401ac;
extern u8 data_02136554;
extern s32 data_02135bac[];
extern u8 data_02135244;
extern u8 data_02136540;
extern s32 data_02140184;
extern u8 data_02136528;
extern u8 data_02136514;
extern u8 data_02135c78;

typedef enum {
    THREE = 3
} THREE_E;

s32 func_020c48f4(s32 arg0, void *arg1, s32 arg2) {
    s32 r7;
    s32 r4;
    s32 r3;
    s32 r2;
    s32 res;
    s32 ok;
    THREE_E idx;

    r7            = data_0214019c;
    data_021401a8 = arg0;
    data_02140160 = arg2;
    func_020c8cec(&data_02135c6c, data_02135b84[r7], arg2);
    idx           = THREE;
    data_0214019c = idx;
    func_020c8cec(&data_02135c74, data_02135b84[idx], &data_0214019c);
    if (arg0 == 1 || arg0 == 3 || arg0 == 5) {
        func_020fcc70(arg1, &data_021402e0, 0xC0);
        func_020fae94(&data_021402e0, 0xC0);
        func_020c8cec(&data_02136580, &data_021354e8, data_0214019c);
        r4            = 0x22;
        r3            = data_0214019c - 4;
        data_02140190 = r4;
        r2            = 0;
        data_021401ac = r2;
        if ((u32) r3 <= 2) {
            func_020c8cec(&data_02136554);
            res = 1;
        } else {
            r4 = func_02105774(func_020c4b50, &data_021402e0, r2, 1, r2);
            if (r4 == 0) {
                res = 1;
            } else if (r4 != 2) {
                if (r4 >= 0 && (u32) r4 < 0x17) {
                    r2 = data_02135bac[r4];
                } else {
                    r2 = (s32) &data_02135244;
                }
                func_020c8cec(&data_02136540, &data_021354e8, r2);
                if (data_0214019c != 9) {
                    data_021401ac = r4;
                }
                res = 0;
            } else {
                r4 = data_02140184;
                while (data_02140190 != 0x23 && data_021401ac == 0 && r4 > 0) {
                    func_020fbf10(0x101D0);
                    (void) *(volatile s32 *) &data_02140190;
                    r4 -= 1;
                }
                if (data_021401ac != 0 || r4 == 0) {
                    ok = 0;
                } else {
                    ok = 1;
                }
                if (ok) {
                    func_020c8cec(&data_02136528);
                    res = 1;
                } else {
                    func_020c8cec(&data_02136514);
                    res = 0;
                }
            }
        }
        return res != 0;
    }
    func_020c8cec(&data_02135c78, arg0);
    return 1;
}
