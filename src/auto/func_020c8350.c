/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void *data_02140200;
extern s32 data_0214019c;
extern u8 data_021360a0;
extern u8 data_021352cc;
extern u8 data_02135c6c;
extern u8 data_02135c74;
extern void *data_02135b84[];
extern u32 data_02135bac[];
extern u8 data_02135244;
extern u8 data_0213608c;
extern u32 data_021401ac;
extern u32 data_02140190;
void func_0204681c(void *);
void func_020c8cec(void *, void *, u32);

void func_020c8350(u8 *arg0) {
    s32 idx;
    u32 val;
    u32 w;
    enum {
        N9 = 9
    } nine;
    enum {
        N1 = 1
    } one;

    if (data_02140200 != NULL) {
        func_0204681c(data_02140200);
        data_02140200 = NULL;
    }
    func_020c8cec(&data_021360a0, &data_021352cc, data_0214019c);
    if (*(u16 *) (arg0 + 2) != 0) {
        func_020c8cec(&data_02135c6c, data_02135b84[data_0214019c], data_0214019c);
        nine          = N9;
        data_0214019c = nine;
        func_020c8cec(&data_02135c74, data_02135b84[nine], (u32) &data_0214019c);
        idx = *(u16 *) (arg0 + 2);
        if (idx >= 0 && (u32) idx < 0x17U) {
            val = data_02135bac[idx];
        } else {
            val = (u32) &data_02135244;
        }
        func_020c8cec(&data_0213608c, &data_021352cc, val);
        w = *(u16 *) (arg0 + 2);
        if (data_0214019c != 9) {
            data_021401ac = w;
        }
    } else {
        func_020c8cec(&data_02135c6c, data_02135b84[data_0214019c], data_0214019c);
        one           = N1;
        data_0214019c = one;
        func_020c8cec(&data_02135c74, data_02135b84[one], (u32) &data_0214019c);
        data_02140190 = 0x1D;
    }
}
