#include <stdio.h>
#include <stdlib.h>

char** naming(int size) {
    int temp;
    char** ptr =  malloc(sizeof(char*) * size);
    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        exit (1);
    }
    for (int i = 0 ; i < size ; i++) {
        printf("Enter Name: \n");
        ptr[i] = calloc(1, 100);
        scanf("%s", ptr[i]);
    }
    return ptr;
}

int main() {
    int no_name;
    printf("Enter No of Names youd like to store: \n");
    scanf("%d", &no_name);
    char** name_arr;
    name_arr = naming (no_name);
    for (int i = 0; i < no_name; i++) {
        printf("%s \n", name_arr[i]);
    }
    return 0;
}