#include "isogram.h"
#include <string.h>
#include <ctype.h>
bool is_isogram(const char phrase[]) {
    if (phrase == NULL) return false;
    size_t len = strlen(phrase);
    for (size_t i = 0; i < len; i++) {
        if (!isalpha(phrase[i]))
            continue;
        for (size_t j = i + 1; j < len; j++) {
            if (!isalpha(phrase[j]))
                continue;
            if (tolower((unsigned char)phrase[i]) == tolower((unsigned char)phrase[j]))
                return false;
        }
    }
    return true;
}