#include "armstrong_numbers.h"
#include <math.h>
#include <stdlib.h>
bool is_armstrong_number(int candidate){
    int temp = candidate, count = 0, value = 0;
    if (candidate == 0) return true;
    if (candidate < 0) temp = abs(candidate);
    while (temp >0){
        temp /= 10;
        count++;
    }
    temp = candidate;
    for (int i = 0; i < count; i++){
        value += pow(temp % 10,count);
        temp /= 10;
    }
    if (value == candidate) return true;
    return false;
}