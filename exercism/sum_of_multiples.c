#include "sum_of_multiples.h"
#include <stdlib.h>
#include <stdbool.h>

unsigned int sum(const unsigned int *factors, const size_t number_of_factors,
                 const unsigned int limit) {
    bool *seen = calloc(limit, sizeof(bool));
    unsigned int total = 0;
    for (size_t i = 0; i < number_of_factors; i++) {
        if (factors[i] == 0) continue;
        for (unsigned int multiple = factors[i]; multiple < limit; multiple += factors[i]) {
            if (!seen[multiple]) {
                total += multiple;
                seen[multiple] = true;
            }
        }
    }
    free(seen);
    return total;
}