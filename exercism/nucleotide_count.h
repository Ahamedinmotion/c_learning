#ifndef NUCLEOTIDE_COUNT_H
#define NUCLEOTIDE_COUNT_H

typedef struct {
    int A;
    int G;
    int C;
    int T;
}tide;

char *count(const char *dna_strand);
#endif