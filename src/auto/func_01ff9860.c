/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 *func_01ff9620(void *arg0, s32 *arg1, s32 *arg2, s32 arg3);

s32 *func_01ff9860(void *arg0, s32 arg1) {
    s32 *next;
    s32 *head;
    s32 *cur;

    cur  = *(s32 **) ((u8 *) arg0 + 4);
    head = cur;
    while (cur != 0) {
        next = func_01ff9620(arg0, head, cur, 0);
        if (*cur == arg1) {
            return cur;
        }
        cur = next;
    }
    return 0;
}
