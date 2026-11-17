/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Entry02074538 {
    u8 id;
    u8 active;
} Entry02074538;

extern u8 *data_0213e580;

void func_02074538(Entry02074538 *entries) {
    u8 i;
    u8 *game = data_0213e580;
    for (i = 0; i < 30; i++) {
        if (entries[i].active != 0) {
            u32 id = entries[i].id;
            if (id == *(s32 *) (game + 0xF4)) {
                entries[i].active = 0;
                return;
            }
        }
    }
}
