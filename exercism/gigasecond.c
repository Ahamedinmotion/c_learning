#include "gigasecond.h"
#include <time.h>
#include <stdio.h>

#define GIGASECOND 1000000000

void gigasecond(time_t input, char *output, size_t size) {
    time_t gs_time = input + GIGASECOND;
    struct tm *utc_time = gmtime(&gs_time);
    strftime(output, size, "%Y-%m-%d %H:%M:%S", utc_time);
}