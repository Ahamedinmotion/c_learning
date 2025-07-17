#include <stdio.h>

int fibonacci() {
    static int first=0, second = 1;
    int current = first, next = first+ second;
    first = second;
    second = next;
    return current;
}

int main() {
    int fib_var;
    for (int i = 0; i<10; i++) {
    fib_var= fibonacci();
    printf("%d is the %dth value of the fibonacci sequence\n", fib_var, i+1);
    }
    return 0;

}