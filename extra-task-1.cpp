#include "extra-task-1.h"
#include <assert.h>

//Return the number of seconds later that a time in seconds
//time_2 is than a time in seconds time_1.
double seconds_difference(double time_1, double time_2)
{
    return time_2 - time_1;
}

//Return the number of hours later that a time in seconds
//time_2 is than a time in seconds time_1.
double hours_difference(double time_1, double time_2)
{
    return (time_2 - time_1) / 3600.0;
}

//Return the total number of hours in the specified number
//of hours, minutes, and seconds.
double to_float_hours(int hours, int minutes, int seconds)
{
    return 0;
}

//hours is a number of hours since midnight. Return the
//hour as seen on a 24 - hour clock.
double to_24_hour_clock(double hours)
{
    return 0;
}

//hours part of a time in seconds
int get_hours(int seconds)
{
    return 0;
}

//hours part of a time in seconds
int get_minutes(int seconds)
{
    return 0;
}

//hours part of a time in seconds
int get_seconds(int seconds)
{
    return 0;
}

//Return time at UTC+0, where utc_offset is the number of hours away from UTC + 0.
double time_to_utc(int utc_offset, double time)
{
    return 0;
}

//Return UTC time in time zone utc_offset.
double time_from_utc(int utc_offset, double time)
{
    return 0;
}
