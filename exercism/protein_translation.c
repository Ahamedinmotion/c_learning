#include "protein_translation.h"
#include <string.h>

protein_t protein(const char *const rna) {
    protein_t pro = { .valid = true, .count = 0 };
    size_t rna_len = strlen(rna);
    size_t amino_count = 0;
    bool saw_stop = false;
    for (size_t i = 0; i + 2 < rna_len; i += 3) {
        if (amino_count >= MAX_AMINO_ACIDS) break;
        char c1 = rna[i];
        char c2 = rna[i + 1];
        char c3 = rna[i + 2];
        if (c1 == 'U' && c2 == 'A' && (c3 == 'A' || c3 == 'G')) {
            saw_stop = true;
            break;
        }
        if (c1 == 'U' && c2 == 'G' && c3 == 'A') {
            saw_stop = true;
            break;
        }
        if (c1 == 'A' && c2 == 'U' && c3 == 'G')
            pro.amino_acids[amino_count++] = Methionine;
        else if (c1 == 'U' && c2 == 'U' && (c3 == 'U' || c3 == 'C'))
            pro.amino_acids[amino_count++] = Phenylalanine;
        else if (c1 == 'U' && c2 == 'U' && (c3 == 'A' || c3 == 'G'))
            pro.amino_acids[amino_count++] = Leucine;
        else if (c1 == 'U' && c2 == 'C' && (c3 == 'U' || c3 == 'C' || c3 == 'A' || c3 == 'G'))
            pro.amino_acids[amino_count++] = Serine;
        else if (c1 == 'U' && c2 == 'A' && (c3 == 'U' || c3 == 'C'))
            pro.amino_acids[amino_count++] = Tyrosine;
        else if (c1 == 'U' && c2 == 'G' && (c3 == 'U' || c3 == 'C'))
            pro.amino_acids[amino_count++] = Cysteine;
        else if (c1 == 'U' && c2 == 'G' && c3 == 'G')
            pro.amino_acids[amino_count++] = Tryptophan;
        else {
            pro.valid = false;
            return pro;
        }
    }
    if (!saw_stop && (rna_len % 3 != 0)) {
        pro.valid = false;
        return pro;
    }
    pro.count = amino_count;
    pro.valid = true;
    return pro;
}