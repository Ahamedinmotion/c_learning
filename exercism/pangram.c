#include "pangram.h"
#include <ctype.h>
#include <stddef.h>

bool is_pangram(const char *sentence) {
    if (!sentence) return false;

    bool seen[26] = { false };
    int count = 0;

    for (size_t i = 0; sentence[i] != '\0'; i++) {
        if (isalpha(sentence[i])) {
            int index = tolower(sentence[i]) - 'a';
            if (!seen[index]) {
                seen[index] = true;
                count++;
            }
        }
    }

    return count == 26;
}