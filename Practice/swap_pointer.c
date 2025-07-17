#include <stdio.h>

void swap( int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main () {
    int var_1 = 20, var_2 = 402;
    int *p_v1 = &var_1, *p_v2 = &var_2;
    printf("%p is the address of: %d and %p is the address of %d \n", p_v1, var_1, p_v2, *p_v2 );
    swap( p_v1, p_v2);
    printf("%p is the address of: %d and %p is the address of %d now \n", p_v1, var_1, p_v2, *p_v2 );
    return 0;
}