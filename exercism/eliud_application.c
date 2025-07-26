#include "eliuds_eggs.h"
#include <stdio.h>

int egg_count(unsigned int n) {
    int count = 0;
    while (n > 0) {
        if (n & 1) {
            count++;
        }
        n >>= 1;
    }
    return count;
}