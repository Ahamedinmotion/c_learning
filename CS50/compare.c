#include <stdio.h>

int compare(void){
    int x, y;
    printf("Enter d 1: \n");
    scanf("%d", &x);
    printf("Enter d 2: \n");
    scanf("%d", &y);
    if (x > y){
        printf("%d is Big\n", x);
        return x;
    }
    else{
        printf("%d is Big\n", y);
        return y;
    }
}

int main(){
    int a;
    a = compare();
    printf("%d \n",a);
    return 0;
}