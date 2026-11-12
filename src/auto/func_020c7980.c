/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020c8cec(void *, void *, s32);            /* extern */
extern s32 data_0214019c;
extern s32 data_02140190;
extern s32 data_021401ac;
extern u16 data_0214017c;
extern u8 data_021363c4;
extern u8 data_021363b0;
extern u8 data_02135518;
extern u8 data_02135bac;
extern u8 data_02135244;
extern u8 data_02135b84;
extern u8 data_02135c6c;
extern u8 data_02135c74;

void func_020c7980(u8 *arg0) {
    s32 idx;
    s32 r2;
    u16 v;
    enum {
        ONE = 1
    } one;

    func_020c8cec(&data_021363c4, &data_02135518, data_0214019c);
    data_02140190 = 0x11;
    idx           = *(u16 *) (arg0 + 2);
    if (idx != 0) {
        if (idx >= 0 && (u32) idx < 0x17U) {
            r2 = *(s32 *) (&data_02135bac + idx * 4);
        } else {
            r2 = (s32) &data_02135244;
        }
        func_020c8cec(&data_021363b0, &data_02135518, r2);
        v = *(u16 *) (arg0 + 2);
        if (data_0214019c != 9) {
            data_021401ac = v;
        }
        return;
    }
    func_020c8cec(&data_02135c6c, (void *) *(s32 *) (&data_02135b84 + data_0214019c * 4), data_0214019c);
    one           = 1;
    data_0214019c = one;
    func_020c8cec(&data_02135c74, (void *) *(s32 *) (&data_02135b84 + one * 4), (s32) &data_0214019c);
    data_02140190 = 0x11;
    data_0214017c = 0;
}
