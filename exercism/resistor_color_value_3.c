#include "resistor_color_trio.h"
#include <math.h>
#include <stdint.h>

resistor_value_t color_code(const resistor_band_t *colors) {
    uint64_t raw_value = (colors[0] * 10 + colors[1]) * (uint64_t)pow(10, colors[2]);
    resistor_value_t result;

    if (raw_value >= 1000000000) {
        result.value = raw_value / 1000000000;
        result.unit = GIGAOHMS;
    } else if (raw_value >= 1000000) {
        result.value = raw_value / 1000000;
        result.unit = MEGAOHMS;
    } else if (raw_value >= 1000) {
        result.value = raw_value / 1000;
        result.unit = KILOOHMS;
    } else {
        result.value = raw_value;
        result.unit = OHMS;
    }

    return result;
}