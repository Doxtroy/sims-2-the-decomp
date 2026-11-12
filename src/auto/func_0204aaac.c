/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern u32 data_0213d6f8;
extern u32 data_0213d6fc;
extern u32 *data_0213d708;
void func_0204aaac(u32 arg0) {
    u32 i;
    u32 *tbl;
    u32 n;
    u32 c;
    n = data_0213d6f8;
    c = data_0213d6fc;
    if (c == n) {
        return;
    }
    data_0213d6fc = c + 1;
    i             = 0;
    if (i >= n) {
        return;
    }
    tbl = data_0213d708;
    do {
        if (tbl[i] == 0) {
            tbl[i] = arg0;
            return;
        }
        i++;
    } while (i < n);
}
