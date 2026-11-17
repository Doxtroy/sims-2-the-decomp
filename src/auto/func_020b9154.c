/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Unk020b9154 {
    u8 unk0[4];
    u8 unk4[0x68];
    void *handleA;
    s32 unk70;
    void *handleB;
    u8 unk78[0x34];
    u16 flag0 : 1;
    u16 flag1 : 1;
    u16 pending : 1;
    u16 flags3 : 3;
    u16 useB : 1;
    u16 flags7 : 9;
    u16 unkAE;
    u16 unkB0;
    u8 unkB2[0xC];
    u8 unkBE;
    u8 unkBF;
} Unk020b9154;

void func_020ee564(void *, void *);
void func_020b8e58(void *);

void func_020b9154(Unk020b9154 *obj) {
    if (obj->pending) {
        if (obj->useB == 1) {
            if (obj->handleB != NULL) {
                func_020ee564(obj->unk4, obj->handleB);
                func_020b8e58(&obj->handleB);
            }
        } else {
            if (obj->handleA != NULL) {
                func_020ee564(obj->unk4, obj->handleA);
                func_020b8e58(&obj->handleA);
            }
        }
        obj->unkB0   = 0xFFFF;
        obj->pending = 0;
        obj->flag0   = 1;
    }
    obj->unkBE = 0;
    obj->unkBF = 0;
}
