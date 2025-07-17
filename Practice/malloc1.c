#include <stdio.h>
#include <stdlib.h>

static int size;

void return_list(int ** ptr) {
    printf("Enter size of entry: \n");
    scanf("%d", &size);
    *ptr = (int*) malloc(sizeof(int)*size);
    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
}

void input_value(int *ptr){
    int temp;
    for (int i = 0; i < size; i++){
        printf("Enter Your digit: \n");
        scanf("%d", &temp);
        ptr[i] = temp;
    }
}

int main () {
    int *arr;
    return_list(&arr);
    input_value(arr);
    printf("%d", *arr);
    for (int i = 0; i < size; i++ ){
        printf("%d \n", arr[i]);
    }
    free (arr);
    return 0;
}