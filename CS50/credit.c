#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool luhn(const char *num) {
  int sum = 0;
  int position = 0;
  int digit_count = 0;
  int len = strlen(num);
  for (int i = 0; i < len; i++) {
    if (num[i] == ' ')
      continue;
    if (!isdigit((unsigned char)num[i]))
      return false;
    digit_count++;
  }
  if (digit_count <= 1)
    return false;
  for (int i = len - 1; i >= 0; i--) {
    if (num[i] == ' ')
      continue;
    int digit = num[i] - '0';
    if (position % 2 == 1) {
      digit *= 2;
      if (digit > 9)
        digit -= 9;
    }
    sum += digit;
    position++;
  }

  return (sum % 10 == 0);
}
int main() {
  char num[256];
  printf("Your Number: \n");
  if (fgets(num, sizeof(num), stdin) == NULL) {
    printf("Input error.\n");
    return 1;
  }
  size_t len = strlen(num);
  if (len > 0 && num[len - 1] == '\n') {
    num[len - 1] = '\0';
  }
  bool valid = luhn(num);
  if (valid) {
    printf("Valid\n");
  } else {
    printf("Invalid\n");
  }
  return 0;
}