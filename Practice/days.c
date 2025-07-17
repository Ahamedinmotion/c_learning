#include <stdio.h>

enum weekdays {Monday,
               Tuesday,
               Wednesday,
               Thursday,
               Friday,
               Saturday,
               Sunday} ;

void week( int digit) {
    switch (digit) {
    case Monday:
        printf("It's Monday!\n");
        break;
    case Tuesday:
        printf("It's Tuesday!\n");
        break;
    case Wednesday:
        printf("It's Wednesday!\n");
        break;
    case Thursday:
        printf("It's Thursday!\n");
        break;
    case Friday:
        printf("It's Friday!\n");
        break;
    case Saturday:
        printf("It's Saturday!\n");
        break;
    case 6:
        printf("It's Sunday!\n");
        break;
    default:
        printf("Invalid\n");
    }
}

int main() {
    int u_day;
    printf("Enter The integer:");
    scanf ("%d", &u_day);
    week(u_day);
    return 0;
}