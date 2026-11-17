/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Vec2_02044fa4 {
    s32 x;
    s32 y;
} Vec2_02044fa4;

typedef struct Unk02044fa4 {
    u8 unk0[0x10];
    u8 unk10;
    u8 unk11;
    u8 unk12;
    u8 unk13;
    s32 unk14;
    s32 unk18;
} Unk02044fa4;

static inline u16 ReadU16(u8 **cursor) {
    u16 *p    = (u16 *) *cursor;
    u16 value = *p++;
    *cursor   = (u8 *) p;
    return value;
}

static inline s32 ReadS32(u8 **cursor) {
    s32 *p    = (s32 *) *cursor;
    s32 value = *p++;
    *cursor   = (u8 *) p;
    return value;
}

s32 func_02044fa4(Unk02044fa4 *obj, u8 **cursor) {
    volatile Vec2_02044fa4 copy;
    s32 value  = ReadS32(cursor);
    copy.x     = value;
    copy.y     = value;
    obj->unk18 = value;
    obj->unk10 = ReadU16(cursor);
    obj->unk11 = ReadU16(cursor);
    obj->unk12 = ReadS32(cursor);
    obj->unk14 = ReadS32(cursor) >> 12;
    return 1;
}
