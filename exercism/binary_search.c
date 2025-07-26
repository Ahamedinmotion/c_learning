#include "binary_search.h"
#include <stdlib.h>
#include <string.h>
const int *binary_search(int value, const int *arr, size_t length) {
    if (arr == NULL || length == 0)
        return NULL;

    const int *temp = arr;
    size_t size = length;

    while (size > 0) {
        size_t mid = size / 2;

        if (value == temp[mid]) {
            return &temp[mid];
        } else if (value > temp[mid]) {
            temp = &temp[mid + 1];
            size = size - mid - 1;
        } else {
            size = mid;
        }
    }

    return NULL;
}