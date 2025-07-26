#include "perfect_numbers.h"
int classify_number(int no) {
    if (no < 1) return ERROR;
    if (no == 1) return DEFICIENT_NUMBER;
    int sum = 1;
    for (int i = 2; i <= no / 2; i++) {
        if (no % i == 0) {
            sum += i;
        }
    }
    if (sum == no) return PERFECT_NUMBER;
    if (sum > no) return ABUNDANT_NUMBER;
    if (sum < no) return DEFICIENT_NUMBER;
    return ERROR;
}