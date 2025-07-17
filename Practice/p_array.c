#include <stdio.h>

void display(int * array, int size) {
    for (int i= 0; i < size; i++) {
        printf("%d is the %dth element\n", *(array + i), (i + 1));
    } 

}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    display(arr, size);
    return 0;
}