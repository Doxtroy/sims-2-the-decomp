/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0213aeb8[];
extern u8 data_0213aeac[];
void func_02048fe4(void *);
void func_02048f7c(void);
void func_02111e88(void *, void *, void *);

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_02112a84(void) {
    func_02048fe4(data_0213aeb8);
    func_02111e88(data_0213aeb8, func_02048f7c, data_0213aeac);
}
