#include "prime_factors.h"

size_t find_factors(uint64_t n, uint64_t factors[static MAXFACTORS]) {
    size_t marker = 0;
    for (uint64_t i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            factors[marker++] = i;
            n /= i;
        }
    }
    if (n > 1) {
        factors[marker++] = n;
    }
    return marker;
}