#include <stdio.h>

int main() {
    int age = 20;
    int *adress_of_age = &age;
    int **abc =  adress_of_age;
    printf("%d is the age\n", *adress_of_age);
    printf("%p is the adress of 20\n", adress_of_age);
    return 0;
}