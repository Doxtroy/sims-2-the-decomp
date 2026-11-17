/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Flags02042e24 {
    u32 unk0 : 16;
    u32 count : 7;
    u32 used : 1;
    u32 unk24 : 8;
} Flags02042e24;

typedef struct Entry02042e24 {
    void *data;
    s32 unk4;
    Flags02042e24 flags;
} Entry02042e24;

typedef struct Node02042e24 {
    u8 unk0[0x10];
    Entry02042e24 *entry;
} Node02042e24;

void func_02043230(Node02042e24 **, void *, u16 *);

void *func_02042e24(void *tree, u16 key, s32 acquire) {
    u16 searchKey;
    Node02042e24 *node;
    Entry02042e24 *entry;
    searchKey = key;
    func_02043230(&node, tree, &searchKey);
    entry = node->entry;
    if (acquire) {
        if (!entry->flags.used) {
            entry->flags.used  = 1;
            entry->flags.count = 1;
        } else {
            entry->flags.count = entry->flags.count + 1;
        }
    } else {
        if (!entry->flags.used) {
            entry->flags.count = 10;
        }
    }
    return entry->data;
}
