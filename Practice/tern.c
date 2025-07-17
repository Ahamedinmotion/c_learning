#include <stdio.h>

char assign (int *score) {
    return  (*score > 90) ? 'A' :
             (*score > 80) ? 'B' :
             (*score > 50) ? 'C' : 'F';
}

int main() {
    int scores[] ={ 78, 83, 20, 99};
    for (int i = 0 ; i < 4; i++) {
        int * p_v = &scores[i];
        char grade = assign ( p_v );
        printf("%c\n", grade);
    }
    return 0;
}