#include <stdio.h>

int counter() {
    static int count = 0;
    count ++;
    return count;
}

int main() {
    int var=0;
    for (int i=0; i<5; i++) {
        var=counter();
        printf("%d is th no of times the program was run\n", var);
    }
    return 0;
}