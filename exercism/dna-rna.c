#include "rna_transcription.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *to_rna(const char *dna) {
    if (dna == NULL) {
        return NULL;
    }
    size_t len = strlen(dna);
    char *rna = calloc(len + 1, sizeof(char));
    if (!rna) return NULL;
    for (size_t i = 0; i < len; i++) {
        switch (dna[i]) {
            case 'G':
                rna[i] = 'C';
                break;
            case 'C':
                rna[i] = 'G';
                break;
            case 'T':
                rna[i] = 'A';
                break;
            case 'A':
                rna[i] = 'U';
                break;
            default:
                free(rna);
                return NULL;
        }
    }

    return rna;
}