/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct Handler0200b8b4 {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3(s32, s32, s32);
    virtual s32 f4(s32);
};

typedef struct List0200b8b4 {
    u8 unk0[8];
    Handler0200b8b4 **handlers;
    Handler0200b8b4 *fallback;
} List0200b8b4;

extern "C" void func_0200b708(List0200b8b4 *, s32, s32, s32, s32, s32);

extern "C" void func_0200b8b4(List0200b8b4 *list, s32 index, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    Handler0200b8b4 *handler;
    if (index == -1) {
        handler = list->fallback;
    } else {
        handler = list->handlers[index];
    }
    if (handler != NULL) {
        if (handler->f4(arg4) == 0) {
            return;
        }
        handler->f3(arg3, arg4, arg5);
        return;
    }
    func_0200b708(list, index, arg3, arg2, arg4, arg5);
}
