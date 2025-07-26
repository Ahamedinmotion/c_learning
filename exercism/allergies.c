#include "allergies.h"

bool is_allergic_to(allergen_t allergen, int score){
    return(score & (1 << allergen)) != 0;
}

allergen_list_t get_allergens(int score){
    allergen_list_t list;
    list.count = 0;
    for (int i = 0; i < 8; i++){
        if(is_allergic_to(i, score)){
            list.allergens[i] = true;
            list.count ++;
        }
        else list.allergens[i] = false;
    }
    return list;
}