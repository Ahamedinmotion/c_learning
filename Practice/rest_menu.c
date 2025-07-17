#include <stdio.h>

enum menu { 
    Coffee = 1,
    Tea,
    Mocha,
    Burger,
    Cake,
    Pizza,
    Steak
};

const int cof_p = 20, tea_p = 10, moc_p = 80, bur_p = 220, cak_p = 120, piz_p = 200, stk_p = 320;

#define net_tax(item) ((item)+(item * .02))

float order () {
    int price = 0, rep = 1, choice;    
    while (rep == 1) {
        printf("Here's the menu as follows:\n"
            "1. Coffee\n"
            "2. Tea\n"
            "3. Mocha\n"
            "4. Burger\n"
            "5. Cake\n"
            "6. Pizza\n"
            "7. Steak\n"
            "Please Enter their corresponding number for your order. \n");
    scanf("%d", &choice);
    switch (choice) {
        case Coffee: price += cof_p; break;
        case Tea: price += tea_p; break;
        case Mocha: price += moc_p; break;
        case Burger: price += bur_p; break;
        case Cake: price += cak_p; break;
        case Pizza: price += piz_p; break;
        case Steak: price += stk_p; break;
        default: printf("Invalid choice.\n"); break;
    }
    printf("Would You like to keep ordering?\n"
    "If so, enter 1.\n"
    " To stop, enter any other number:\n");
    scanf("%d", &rep);
    }
    return price;
}

int main(){
    float price = order();
    price = net_tax( price );
    printf("%f is your total price \n", price);
    return 0;
}