#include <stdio.h>

typedef struct {
    char *title;
    char *author;
    int price;
} book;

int main() {

    book test;
    test.title = "Day Book";
    test.author = "Betterhomes";
    test.price = 240;

    printf("%s is the author of the book: %s sold for:%d \n", test.author, test.title, test.price);

    return 0;
}