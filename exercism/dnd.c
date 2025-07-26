#include "dnd_character.h"
#include <stdlib.h>
#include <time.h>

int modifier(int score) {
    int diff = score - 10;
    if (diff >= 0) {
        return diff / 2;
    } else {
        return (diff - 1) / 2;
    }
}

int ability(void) {
    int rolls[4];
    for (int i = 0; i < 4; i++) {
        rolls[i] = rand() % 6 + 1;
    }
    int min = rolls[0];
    for (int i = 1; i < 4; i++) {
        if (rolls[i] < min) {
            min = rolls[i];
        }
    }
    int sum = rolls[0] + rolls[1] + rolls[2] + rolls[3] - min;
    return sum;
}

dnd_character_t make_dnd_character(void) {
    dnd_character_t c;

    c.strength = ability();
    c.dexterity = ability();
    c.constitution = ability();
    c.intelligence = ability();
    c.wisdom = ability();
    c.charisma = ability();
    c.hitpoints = 10 + modifier(c.constitution);
    return c;
}





