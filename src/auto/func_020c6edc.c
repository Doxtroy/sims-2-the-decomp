/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 mode;
} State;

void func_020c8cec(void *, s32);
extern s32 data_02135b84[];
extern s32 data_02135c6c;
extern s32 data_02135c74;
extern u16 data_02140168;
extern State data_0214019c;

u16 func_020c6edc(void) {
    func_020c8cec(&data_02135c6c, data_02135b84[data_0214019c.mode]);
    data_0214019c.mode = 1;
    func_020c8cec(&data_02135c74, data_02135b84[data_0214019c.mode]);
    return data_02140168;
}
