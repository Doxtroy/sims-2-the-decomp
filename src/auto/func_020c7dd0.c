/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u32 data_0214019c;
extern u8 data_02136910;
extern u8 data_0213540c;
extern u8 data_02135bac;
extern u8 data_02135244;
extern u8 data_021368fc;
extern u8 data_021401ac;
extern u32 data_02135b84;
extern u8 data_02135c6c;
extern u8 data_02135c74;
extern u32 data_02140190;
extern void func_020c8cec(void *, void *, u32);

void func_020c7dd0(u8 *arg0) {
    s32 idx;
    u32 r2v;
    enum {
        ONE = 1
    } one;
    func_020c8cec(&data_02136910, &data_0213540c, data_0214019c);
    idx = *(u16 *) (arg0 + 2);
    if (idx != 0 && data_0214019c != 8) {
        if (idx >= 0 && (u32) idx < 0x17) {
            r2v = ((u32 *) &data_02135bac)[idx];
        } else {
            r2v = (u32) &data_02135244;
        }
        func_020c8cec(&data_021368fc, &data_0213540c, r2v);
        {
            u32 w = *(u16 *) (arg0 + 2);
            if (data_0214019c != 9) {
                *(u32 *) &data_021401ac = w;
            }
        }
        return;
    }
    func_020c8cec(&data_02135c6c, (void *) ((u32 *) &data_02135b84)[data_0214019c], data_0214019c);
    data_0214019c = 1;
    one           = 1;
    func_020c8cec(&data_02135c74, (void *) ((u32 *) &data_02135b84)[one], (u32) &data_0214019c);
    data_02140190 = 0xB;
}
