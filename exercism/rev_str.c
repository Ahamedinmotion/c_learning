#include "reverse_string.h"
#include <string.h>
#include <stdlib.h>

char *reverse(const char *value){
    int size = strlen(value);
    char * rev = malloc((size) + 1);
    for (int i = 0; i < size; i ++){
        rev[i] = value[size - i - 1];
    }
    rev[size] = '\0';
    return rev;
}