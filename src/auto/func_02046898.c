/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Item02046898 {
    u8 unk0[4];
    u32 flags;
} Item02046898;

typedef struct List02046898 {
    Item02046898 **items;
    u16 count;
} List02046898;

void func_02046898(List02046898 *list, s32 enable) {
    u32 i;
    for (i = 0; i < list->count; i++) {
        Item02046898 *item = list->items[i];
        if (item != NULL) {
            if (enable) {
                item->flags |= 1;
            } else {
                item->flags &= ~1;
            }
        }
    }
}
