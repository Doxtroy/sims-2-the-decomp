/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void func_020c8cec();
extern void func_020fbf10(s32);
extern s32 func_02105b9c(void *);
extern u8 data_02135b84[];
extern u8 data_02135c64;
extern u8 data_02135c6c;
extern u8 data_02135c74;
extern s32 data_02140184;
extern volatile s32 data_02140190;
extern s32 data_0214019c;
extern s32 data_021401ac;
extern u8 func_020c46fc;

s32 func_020c45f4(void) {
    s32 r;
    s32 n;
    void *p;

    enum {
        KK = 3
    } k;
    func_020c8cec(&data_02135c64);
    func_020c8cec(&data_02135c6c, ((void **) data_02135b84)[data_0214019c]);
    k             = 3;
    p             = ((void **) data_02135b84)[k];
    data_0214019c = k;
    func_020c8cec(&data_02135c74, p);
    r = func_02105b9c(&func_020c46fc);
    if (r == 0) {
        return 1;
    }
    if (r == 2) {
        n = data_02140184;
        while (data_02140190 != 9 && data_021401ac == 0 && n > 0) {
            func_020fbf10(0x101D0);
            (void) data_02140190;
            n -= 1;
        }
        return data_021401ac == 0;
    }
    return 0;
}
