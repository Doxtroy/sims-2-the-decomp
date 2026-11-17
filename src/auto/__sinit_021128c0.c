#include "m2c.h"

typedef struct Vec3_02139408 {
    s32 x;
    s32 y;
    s32 z;
} Vec3_02139408;

extern Vec3_02139408 data_02139408;

#pragma define_section INIT ".init" \
                            ".init"

__declspec(INIT) void __sinit_021128c0(void) {
    data_02139408.x = 0x7FFFFFFF;
    data_02139408.y = 0x7FFFFFFF;
    data_02139408.z = 0x7FFFFFFF;
}
