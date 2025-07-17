#include <stdio.h>

static int shared_var=0;

int add( ) {
    shared_var++;
    return shared_var;
}

int sub( ) {
    shared_var -- ;
    return shared_var;
}

int main() {
    int value;
    for ( int i = 0; i<2; i++) {
        value = add( value );
        printf("%d is the value of shared_var\n", value);
    }

    value = sub( value );
        printf("%d is the value of shared_var\n", value);

        return 0;
}