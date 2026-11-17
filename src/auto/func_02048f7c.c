/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Unk02048f7c {
    u8 unk0;
    u8 unk1[0xF];
    void *unk10;
    s32 unk14;
    void *unk18;
    s32 unk1C;
} Unk02048f7c;

void func_0204649c(void *);
void func_020dc614(void *);
void func_020d5b50(void);

Unk02048f7c *func_02048f7c(Unk02048f7c *obj) {
    if (obj->unk10 != NULL) {
        if (obj->unk18 != NULL) {
            if (obj->unk0 == 0) {
                func_0204649c(obj->unk18);
            }
            obj->unk18 = NULL;
        }
        if (obj->unk10 != NULL) {
            func_020dc614(obj->unk10);
            obj->unk10 = NULL;
        }
        func_020d5b50();
        obj->unk1C = 0;
    }
    return obj;
}
