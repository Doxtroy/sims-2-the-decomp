/* compiler: 1.2/sp2p3 -pragma "opt_propagation off" */
#include "m2c.h"

typedef struct {
    s32 year;
    s32 month;
    s32 day;
    s32 week;
} Date;

typedef struct {
    s32 hour;
    s32 minute;
    s32 second;
} Time;

extern u8 *data_0213e434;
extern s32 data_0212888c[];

static inline s32 DateToDays(s32 year, s32 month, s32 day) {
    s32 y    = year - 2000;
    s32 days = y * 365 + (y >> 2) + day + data_0212888c[(u32) (month - 1)];
    s32 adj;
    if ((y & 3) != 0 || month > 2) {
        adj = 1;
    } else {
        adj = 0;
    }
    return days + adj;
}

static inline s32 Conv(Date *date, Time *time) {
    s32 days = DateToDays(date->year + 2000, date->month, date->day);
    return (days - 1) * 86400 + 0x80000000 + (time->minute * 60 + time->hour * 3600 + time->second);
}

void func_0206430c(void) {
    *(s32 *) (data_0213e434 + 0x480c) = Conv((Date *) (data_0213e434 + 0x47f0), (Time *) (data_0213e434 + 0x4800));
}
