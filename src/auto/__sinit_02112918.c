/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_02139c3c[];
extern u8 data_02139c30[];
void func_02112044(void *, s32, s32, void (*)(void), void (*)(void));
void func_02111e88(void *, void *, void *);
void func_0203f544(void);
void func_0203f954(void);
void func_0203f930(void);

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_02112918(void) {
    func_02112044(data_02139c3c, 2, 0x34, func_0203f544, func_0203f954);
    func_02111e88(NULL, func_0203f930, data_02139c30);
}
