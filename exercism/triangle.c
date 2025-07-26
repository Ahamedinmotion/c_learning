#include "triangle.h"

static bool is_valid(triangle_t t) {
    return t.a > 0 && t.b > 0 && t.c > 0 &&
           t.a + t.b >= t.c &&
           t.b + t.c >= t.a &&
           t.a + t.c >= t.b;
}

bool is_equilateral(triangle_t t) {
    if (!is_valid(t)) return false;
    return t.a == t.b && t.b == t.c;
}

bool is_isosceles(triangle_t t) {
    if (!is_valid(t)) return false;
    return t.a == t.b || t.b == t.c || t.a == t.c;
}

bool is_scalene(triangle_t t) {
    if (!is_valid(t)) return false;
    return t.a != t.b && t.b != t.c && t.a != t.c;
}