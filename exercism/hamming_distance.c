#include "hamming.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compute(const char *lhs, const char *rhs) {
    if (strlen(lhs) != strlen(rhs)) {
        return -1;
    }
    int temp = 0;
    for (size_t i = 0; i < strlen(lhs); i++) {
        if (lhs[i] != rhs[i]) {
            temp++;
        }
    }
    return temp;
}