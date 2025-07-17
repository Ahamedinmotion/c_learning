#include "space_age.h"

#define E_sec 31557600.0

const double orb_p[] = {
    [MERCURY] = 0.2408467,
    [VENUS]   = 0.61519726,
    [EARTH]   = 1.0,
    [MARS]    = 1.8808158,
    [JUPITER] = 11.862615,
    [SATURN]  = 29.447498,
    [URANUS]  = 84.016846,
    [NEPTUNE] = 164.79132
};

float age(planet_t planet, int64_t seconds){
    if (planet < MERCURY || planet > NEPTUNE) {
        return -1.0f;
    }
    return (float)(seconds / (E_sec * orb_p[planet]));
}