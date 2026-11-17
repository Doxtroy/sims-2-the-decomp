/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Unk02139414 {
    s32 id;
    void (*callback)(s32);
    s32 callbackArg;
    u8 done;
} Unk02139414;

extern Unk02139414 data_02139414;
extern u32 data_027e0004;
s32 func_021034bc(void);
void func_0210345c(u16);
void func_020f9c48(u16);

void func_0203b50c(void) {
    data_02139414.done = func_021034bc() == 0 ? 1 : 0;
    func_0210345c(data_02139414.id);
    func_020f9c48(data_02139414.id);
    data_027e0004 &= ~0x400;
    if (data_02139414.callback != NULL) {
        data_02139414.callback(data_02139414.callbackArg);
    }
}
