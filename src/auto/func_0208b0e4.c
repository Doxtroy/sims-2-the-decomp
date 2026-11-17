/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Mode0208b014 {
    s32 unk0;
    s32 state;
} Mode0208b014;

typedef struct Child0208b014 {
    u8 unk0[0x130];
    s32 unk130;
} Child0208b014;

typedef struct Unk0208b014 {
    void *vtable;
    Child0208b014 *child;
} Unk0208b014;

extern u8 data_0213355c[];
extern u8 *data_02139fa4;
void func_02067980(void *, Child0208b014 *);

Unk0208b014 *func_0208b0e4(Unk0208b014 *obj) {
    u8 *game;
    obj->vtable = data_0213355c;
    game        = data_02139fa4;
    if (obj->child != NULL) {
        Mode0208b014 *mode = *(Mode0208b014 **) (game + 0xDAC);
        s32 state;
        if (mode != NULL) {
            state = mode->state;
        } else {
            state = 0x32;
        }
        if (state == 12) {
            func_02067980(mode, obj->child);
        }
    }
    if (obj->child != NULL) {
        obj->child->unk130 = 0;
    }
    return obj;
}
