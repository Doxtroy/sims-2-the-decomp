/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0213d754[];
extern u8 data_0213d73c[];
void func_02045a3c(void *);
void func_0204c0bc(void);
void func_02111e88(void *, void *, void *);

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_02112ac4(void) {
    func_02045a3c(data_0213d754);
    func_02111e88(data_0213d754, func_0204c0bc, data_0213d73c);
}
