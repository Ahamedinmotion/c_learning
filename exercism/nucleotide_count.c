#include "nucleotide_count.h"
#include <stdlib.h>
#include <stdio.h>
char *count(const char *dna_strand){
    tide temp = {0,0,0,0};
        for (int i = 0; dna_strand[i] != '\0'; i++) {
        switch (dna_strand[i]) {
            case 'A': temp.A++; break;
            case 'C': temp.C++; break;
            case 'G': temp.G++; break;
            case 'T': temp.T++; break;
            default: {
                char * error = malloc(1);
                error[0] = '\0';
                return error;
            }
        }
    }
    char * result = malloc(32);
    sprintf(result, "A:%d C:%d G:%d T:%d", temp.A, temp.C, temp.G, temp.T);
    return result;
}