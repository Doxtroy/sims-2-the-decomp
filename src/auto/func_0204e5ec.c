/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_0203b628(s32, s32, s32, s32, s32);
M2C_UNK func_0203b7b8(s32, s32, s32);
extern u8 data_0211e71c;
extern u8 data_0213d8bc;
extern u8 data_0213d8c8;
void func_0204e5ec(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    s32 off;
    u8 *rec;
    s32 *tbl;
    s32 *obj;
    s32 v;
    off = arg1 * 0x18;
    rec = &data_0211e71c + off;
    tbl = *(s32 **) (&data_0213d8bc + off);
    obj = (s32 *) tbl[*(s32 *) (rec + 8) * arg2 + arg3];
    v   = arg6 + (obj[6] * *(s32 *) (rec + 12) + *(s32 *) (&data_0213d8c8 + off) + 0x14);
    if (arg7 != 0) {
        func_0203b628(v, arg5, arg4, arg7, 0);
        return;
    }
    func_0203b7b8(v, arg5, arg4);
}
