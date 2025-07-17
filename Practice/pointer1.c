#include <stdio.h>

void add(int *value) {
    (*value)++;
}

int main() {
    int Number= 5;
    int *no= &Number;
    for (int i= 0; i < 3; i++){;
         add(no);
    }
    printf("%d is the value", Number);
    return 0;
    
}