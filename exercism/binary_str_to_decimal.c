#include "binary.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int convert(const char *input) {
    int dec = 0;
    int size = strlen(input);
    for (int i = 0; i < size; i++) {
        char no = input[size - 1 - i];
        if (no != '1' && no!= '0') return -1;
        if (no == '1') dec += pow(2, i);
    }
    return dec;
}