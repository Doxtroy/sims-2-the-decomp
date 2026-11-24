/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void func_020c8cec();

extern u8 data_02135244;
extern u8 data_02135358;
extern u8 *data_02135bac[];
extern u8 *data_02135b84[];
extern u8 data_02135c6c;
extern u8 data_02135c74;
extern u8 data_02136004;
extern u8 data_02136018;
extern s32 data_0214019c;
extern s32 data_021401ac;
extern s32 data_02140190;

void func_020c8808(u8 *arg0) {
    u8 *name;
    u16 c;
    u8 *p;
    enum {
        KK = 1
    } k;

    func_020c8cec(&data_02136018, &data_02135358, data_0214019c);
    c = *(u16 *) (arg0 + 2);
    if (c != 0) {
        if (((s32) c >= 0) && ((u32) c < 0x17U)) {
            name = data_02135bac[c];
        } else {
            name = &data_02135244;
        }
        func_020c8cec(&data_02136004, &data_02135358, name);
        c = *(u16 *) (arg0 + 2);
        if (data_0214019c != 9) {
            data_021401ac = c;
        }
        return;
    }
    func_020c8cec(&data_02135c6c, data_02135b84[data_0214019c]);
    k             = 1;
    p             = data_02135b84[k];
    data_0214019c = k;
    func_020c8cec(&data_02135c74, p);
    data_02140190 = 0x32;
}
