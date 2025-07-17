#include <stdio.h>
#include <math.h>

typedef struct {
    int x;
    int y;
    int z;
} vector;

void define_vector(vector *p) {

    printf("Enter your x component:\n");
    scanf("%d",&p -> x);
    printf("Enter your y component:\n");
    scanf("%d",&p -> y);
    printf("Enter your z component:\n");
    scanf("%d",&p -> z);
}

float min_dist( vector v1,  vector v2) {
    float distance =
    sqrt(
        (v2.x - v1.x) * (v2.x - v1.x) +
        (v2.y - v1.y) * (v2.y - v1.y) +
        (v2.z - v1.z) * (v2.z - v1.z));
    return distance;
}

int main() {
    printf("For your first vector:\n");
    vector v1, v2;
    define_vector(&v1);
    printf("For your second vector:\n");
    define_vector(&v2);
    float distance = min_dist(v1, v2);
    printf("%f is the distance between the two variables\n", distance);
    return 0;

}