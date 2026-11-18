/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u8 pad[0x24];
    s32 x24;
    s32 x28;
} S;
void func_020444f8(s32);
void func_0204681c(void *);
void func_02046844(S *);
void func_020d5604(s32);
extern u8 *data_0213e434;
extern S *data_0213e6d8;
extern void *data_0213e6dc;
extern void *data_0213e6e0;

void func_020a0d1c(void) {
    *(s32 *) (data_0213e434 + 0x469C) = data_0213e6d8->x24;
    if (data_0213e6d8->x28 != -1) {
        func_020d5604(data_0213e6d8->x28);
        data_0213e6d8->x28 = -1;
    }
    func_02046844(data_0213e6d8);
    data_0213e6d8 = NULL;
    func_0204681c(data_0213e6dc);
    data_0213e6dc = 0;
    func_0204681c(data_0213e6e0);
    data_0213e6e0 = 0;
    func_020444f8(0x9B8);
}
