/* compiler: 1.2/sp2p3 -nointerworking */
#include "m2c.h"

extern s32 data_02143020[];

s32 func_020df830(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    s32 m;
    s32 d;
    s32 a5;
    s32 a6;
    s32 a7;
    if (arg0 != data_02143020[6] || arg1 != data_02143020[0] || arg2 != data_02143020[2] || arg3 != data_02143020[4] ||
        arg4 != data_02143020[14] || arg5 != data_02143020[8] || arg6 != data_02143020[10] || arg7 != data_02143020[12]) {
        m                 = (0xFF00FF & (0xFF00FF >> arg4)) << arg0;
        a5                = arg5;
        a6                = arg6;
        a7                = arg7;
        d                 = arg0 - arg4;
        data_02143020[6]  = arg0;
        data_02143020[0]  = arg1;
        data_02143020[2]  = arg2;
        data_02143020[4]  = arg3;
        data_02143020[14] = arg4;
        data_02143020[8]  = a5;
        data_02143020[10] = a6;
        data_02143020[12] = a7;
        data_02143020[25] = d;
        data_02143020[26] = m;
        return 1;
    }
    return 0;
}
