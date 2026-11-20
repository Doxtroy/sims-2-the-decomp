/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0213f99c[];
extern u8 data_0213f990[];
void func_020bcf94(void *);
void func_020bcf74(void);
void func_02111e88(void *, void *, void *);

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_02117498(void) {
    func_020bcf94(data_0213f99c);
    func_02111e88(data_0213f99c, func_020bcf74, data_0213f990);
}
