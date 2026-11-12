/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_02135244[];
extern u8 data_021355d8[];
extern u8 data_02135ac4[];
extern u8 data_02135b84[];
extern u8 data_02135bac[];
extern u8 data_02135c6c[];
extern u8 data_02135c74[];
extern u8 data_021362a0[];
extern u8 data_021362c0[];
extern u8 data_021362d4[];
extern u8 data_021362e8[];
extern u8 data_02136304[];
extern u8 data_02136320[];
extern u8 data_02136334[];
extern u8 data_0213634c[];
extern s32 data_02140190;
extern s32 data_0214019c;
extern s32 data_021401ac;
void func_020c7a80();
void func_020c8cec();
void func_020c70dc();
void func_020c71f4();
s32 func_020c7244();
s32 func_020c7848();
void func_020c7b24();
s32 func_020c8cc4();
s32 func_02105cd8();

void func_020c7f68(u8 *arg0) {
    s32 var_r0;
    s32 temp_r0;
    u16 temp_r1;
    void **tbl;
    void **tbl2;
    s32 h;
    s32 g;
    enum {
        N9 = 9
    } nine;

    func_020c8cec(data_021362d4, data_02135ac4, data_0214019c);
    temp_r1 = *(u16 *) (arg0 + 2);
    if (temp_r1 != 0) {
        if ((s32) temp_r1 >= 0 && (u32) temp_r1 < 0x17U) {
            tbl  = (void **) data_02135bac;
            tbl2 = (void **) tbl[temp_r1];
        } else {
            tbl2 = (void **) data_02135244;
        }
        func_020c8cec(data_021362c0, data_02135ac4, tbl2);
        h = *(u16 *) (arg0 + 2);
        if (data_0214019c != 9) {
            data_021401ac = h;
        }
        func_020c8cec(data_02135c6c, ((void **) data_02135b84)[data_0214019c]);
        nine          = N9;
        data_0214019c = nine;
        func_020c8cec(data_02135c74, ((void **) data_02135b84)[nine]);
        return;
    }
    func_020c8cec(data_0213634c, data_021355d8, func_020c7244());
    data_02140190 = 0x14;
    data_021401ac = 0;
    func_020c71f4(3);
    temp_r0 = func_02105cd8(func_020c7a80);
    if (temp_r0 == 0) {
        var_r0 = func_020c7848();
    } else if (temp_r0 != 2) {
        func_020c8cec(data_02136334);
        func_020c8cec(data_02136320, data_021355d8, func_020c8cc4(temp_r0));
        func_020c70dc(temp_r0);
        var_r0 = 0;
    } else {
        func_020c7b24(0x15);
        if (data_021401ac == 0) {
            func_020c8cec(data_02136304);
            var_r0 = func_020c7848();
        } else {
            func_020c8cec(data_021362e8);
            var_r0 = 0;
        }
    }
    if (var_r0 != 0) {
        data_02140190 = 0x13;
        return;
    }
    func_020c8cec(data_021362a0);
    func_020c8cec(data_02135c6c, ((void **) data_02135b84)[data_0214019c]);
    nine          = N9;
    data_0214019c = nine;
    func_020c8cec(data_02135c74, ((void **) data_02135b84)[nine]);
}
