#include "queen_attack.h"
#include <stdio.h>
#include <stdlib.h>

attack_status_t can_attack(position_t q_1, position_t q_2) {
    if (q_1.row > 7 || q_1.column > 7 || q_2.row > 7 || q_2.column > 7 || (q_1.row == q_2.row && q_2.column == q_1.column)) {
        return INVALID_POSITION;
    }
    else if (q_1.row == q_2.row || q_1.column == q_2.column || (abs(q_1.row - q_2.row) == abs(q_1.column - q_2.column))){
        return CAN_ATTACK;
    }
    else{
        return CAN_NOT_ATTACK;
    }
}