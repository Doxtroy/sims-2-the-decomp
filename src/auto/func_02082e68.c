/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Entry02082e68 {
    u8 unk0;
    u8 unk1;
    u8 unk2;
    u8 id : 6;
    u8 flag : 1;
    u8 unk3_7 : 1;
} Entry02082e68;

u32 func_02082e68(Entry02082e68 *entries, u32 id) {
    u8 i;
    for (i = 0; i < 30; i++) {
        if (entries[i].id == id) {
            return entries[i].flag;
        }
    }
    return 0;
}
