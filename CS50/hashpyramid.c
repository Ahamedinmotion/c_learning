#include <stdio.h>

void hash_p(void) {
  int n;
  printf("No: \n");
  scanf("%d", &n);
  for (int i = 1; i < n + 1; i++) {
    for (int j = 0; j < n - i; j++) {
      printf(" ");
    }
    for (int k = 0; k < i; k++) {
      printf("#");
    }
    printf(" ");
    for (int l = 0; l < i; l++) {
      printf("#");
    }
    printf("\n");
  }
}

int main() { hash_p(); }