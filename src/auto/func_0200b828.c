/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Item0200b828 {
    u8 unk0[0x10];
    s16 id;
    u8 unk12[2];
    u8 type;
} Item0200b828;

typedef struct List0200b828 {
    u8 unk0[5];
    u8 count;
    u8 unk6[2];
    Item0200b828 **items;
} List0200b828;

Item0200b828 *func_0200b828(List0200b828 *list, u32 type, s32 id) {
    s32 i;
    for (i = 0; i < list->count; i++) {
        if (type == list->items[i]->type && (id == 0x7FFFFFFF || id == list->items[i]->id)) {
            return list->items[i];
        }
    }
    return NULL;
}
