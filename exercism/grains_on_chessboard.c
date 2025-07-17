#include "grains.h"
#include <stdio.h>
#include <math.h>

uint64_t square(uint8_t square) {
    if (square == 0 || square > 64) {
        return 0;
    }
    if (square == 1) {
        return 1;
    }
    return (1ULL << (square - 1));
}

uint64_t total(void) {
return ((1ULL << 63) * 2) - 1;
}
