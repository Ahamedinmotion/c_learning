#include "square_root.h"

int square_root(int no) {
    int root = 1;
    int i = 2;
    while (i * i <= no) {
        int count = 0;
        while (no % i == 0) {
            no /= i;
            count++;
        }
        root *= 1;
        for (int j = 0; j < count / 2; j++) {
            root *= i;
        }
        i++;
    }
    return root;
}