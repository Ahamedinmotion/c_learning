#include "high_scores.h"
#include <stdlib.h>

int compare_desc(const void *a, const void *b) {
    return *(int32_t *)b - *(int32_t *)a;
}

int32_t latest(const int32_t *scores, size_t scores_len) {
    return scores[scores_len - 1];
}

int32_t personal_best(const int32_t *scores, size_t scores_len) {
    int32_t max = scores[0];
    for (size_t i = 1; i < scores_len; i++) {
        if (scores[i] > max) max = scores[i];
    }
    return max;
}

size_t personal_top_three(const int32_t *scores, size_t scores_len,
                          int32_t *output) {
    int32_t sorted[scores_len];
    for (size_t i = 0; i < scores_len; i++) {
        sorted[i] = scores[i];
    }

    qsort(sorted, scores_len, sizeof(int32_t), compare_desc);

    size_t count = scores_len < 3 ? scores_len : 3;
    for (size_t i = 0; i < count; i++) {
        output[i] = sorted[i];
    }

    return count;
}