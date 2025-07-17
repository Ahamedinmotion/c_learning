#include <stdio.h>
#include <stdlib.h>


int* value(int * size) {
    int input;
    int * ptr = NULL;
    int i = 0;
    while (1) {
    printf("Enter -1 to stop \n");
    printf("Enter your integer: \n");
    scanf("%d", &input);
    if ( input == -1) {
        break;
    }
    int * temp = realloc( ptr, sizeof(int) * (i + 1));
    if (temp == NULL) {
        printf("reallocation error \n");
        free(ptr);
        exit(1);
    }
    ptr = temp;
    ptr[i] = input;
    i++;
    }
    *size = i;
    return ptr;


}

int main() {
    int size = 0;
    int * ptr = value(&size);
    for (int i = 0; i < size; i++) {
        printf("%d \n", ptr[i]);
    }
    free(ptr);
    return 0;
}