/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Unk02083218 {
    u8 unk0[0x44];
    s32 unk44;
    u8 unk48[0x1C8 - 0x48];
    s32 type;
} Unk02083218;

extern void (*data_02121db8[])(Unk02083218 *);
void func_0204a550(void *);
void func_02046844(void *);
void func_0204a9a4(void);

void func_02083218(Unk02083218 **slots) {
    u8 i;
    for (i = 0; i < 2; i++) {
        if (slots[i] != NULL) {
            Unk02083218 *p;
            data_02121db8[slots[i]->type](slots[i]);
            p = slots[i];
            if (p->unk44 == 0) {
                if (p != NULL) {
                    func_0204a550(p);
                    func_02046844(p);
                }
                slots[i] = NULL;
            }
        }
    }
    func_0204a9a4();
}
