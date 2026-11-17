/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Layout0211e71c {
    u8 unk0[8];
    s32 width;
    s32 recordSize;
    u8 unk10[8];
} Layout0211e71c;

typedef struct Record0204e5ec {
    u8 unk0[0x18];
    s32 page;
} Record0204e5ec;

typedef struct Records0213d8bc {
    Record0204e5ec **records;
    u8 unk4[0x14];
} Records0213d8bc;

typedef struct Base0213d8c8 {
    s32 base;
    u8 unk4[0x14];
} Base0213d8c8;

extern Layout0211e71c data_0211e71c[];
extern Records0213d8bc data_0213d8bc[];
extern Base0213d8c8 data_0213d8c8[];
void func_0203b628(s32, s32, s32, s32, s32);
void func_0203b7b8(s32, s32, s32);

void func_0204e5ec(s32 arg0, s32 type, s32 row, s32 col, s32 arg4, s32 arg5, s32 offset, s32 async) {
    Layout0211e71c *layout = &data_0211e71c[type];
    s32 index              = layout->width * row + col;
    Record0204e5ec *record = data_0213d8bc[type].records[index];
    s32 addr               = offset + (record->page * layout->recordSize + data_0213d8c8[type].base + 0x14);
    if (async) {
        func_0203b628(addr, arg5, arg4, async, 0);
    } else {
        func_0203b7b8(addr, arg5, arg4);
    }
}
