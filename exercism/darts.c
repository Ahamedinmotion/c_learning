#include "darts.h"

uint8_t score(coordinate_t pos) {
    float d_squared = pos.x * pos.x + pos.y * pos.y;
    if (d_squared <= 1.0f) return 10;
    else if (d_squared <= 25.0f) return 5;
    else if (d_squared <= 100.0f) return 1;
    else return 0;
}