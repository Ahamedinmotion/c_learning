#include "rotational_cipher.h"
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

char arr[] = "abcdefghijklmnopqrstuvwxyz";

char *rotate(const char *text, int shift_key){
    char *final = malloc(strlen(text) + 1);
    if (!final) return NULL;
    final[strlen(text)] = '\0';
    for (int i = 0; text[i] != '\0'; i++){
        char ch = text[i];
        if (isalpha(ch)) {
            for (int j = 0; j < 26; j++){
                if (tolower(ch) == arr[j]){
                    int shifted_index = (j + shift_key) % 26;
                    final[i] = isupper(ch) ? toupper(arr[shifted_index]) : arr[shifted_index];
                    break;
                }
            }
        } else {
            final[i] = ch;
        }
    }
    return final;
}