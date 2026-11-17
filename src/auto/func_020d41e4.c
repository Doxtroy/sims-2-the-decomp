/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Voice020d41e4 {
    u8 unk0[0x2D];
    u8 volume;
} Voice020d41e4;

extern Voice020d41e4 *data_021424e0[];
extern Voice020d41e4 *data_021424d4;
void func_020d3f48(s32);

void func_020d41e4(s32 index, u32 volume) {
    Voice020d41e4 *voice = data_021424e0[index];
    if (voice == NULL) {
        return;
    }
    data_021424d4 = voice;
    if (volume < 0x20) {
        volume = 0x20;
    } else if (volume > 0xFF) {
        volume = 0xFF;
    }
    voice->volume = volume;
    func_020d3f48(index);
}
