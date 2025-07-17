#include <stdio.h>

#define Force(mass, accel) ((mass) * (accel))

const float MIN_MASS = 0.1;
const float MAX_MASS = 1000.0;
const float MIN_ACCEL = -50.0;  
const float MAX_ACCEL = 50.0;

int main() {
    float mass, acc;
    printf("Enter Mass (kg):");
    scanf("%f", &mass);
    printf("Enter acceleration (m/sec):");
    scanf("%f", &acc);

    if ( (mass < MAX_MASS && mass > MIN_MASS) && (acc > MIN_ACCEL && acc < MAX_ACCEL)) {
        printf("%f is the net force\n", Force(mass, acc));
    }
    else {
        printf("Invalid Entries\n");
    }
    return 0;
}