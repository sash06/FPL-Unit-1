/*#include<stdio.h>
int main()
{
    int num;
    printf("\n Welcome to the hotel!!");
    printf("\n What you will like to order?");
    printf("\n Please press the number what you want.");
    scanf("%d",&num);
    switch (num)
    {
        case 1:
        printf("\n")
    }
}
#include<stdio.h>
int main(){
   
    int num;
   printf("\n Welcome to the World of Coffee Hotel");
    printf("\n Enter a num for choice for menu:  ");
    scanf("%d",&num);
    switch(num)
    {
    case 1:
    printf("\n Espresso ");
    break;
    case 2:
    printf("\n Cappuccino ");
    break;
    case 3:
    printf("\n Latte");
    break;
    case 4:
    printf("\n Americano");
    break;
    case 5: 
    printf("\n Macchiato");
    break;
    case 6:
    printf("\n Affogato");
    break;
    case 7:
    printf("\n  Cortado");
    break;
    default:
    printf("\n WRONG INPUT");
    break;
    }
    return 0;
}

#include <stdio.h>

int main() {
    int ch, quantity,c;
    float total = 0.0;

    const int pizza = 199;
    const int burger = 99;
    const int pasta = 149;
    const int fries = 49;
    const int drink = 19;
    int pizza_qty = 0, burger_qty = 0, pasta_qty = 0, fries_qty = 0, drink_qty = 0;
    int pizza_total = 0, burger_total = 0, pasta_total = 0, fries_total = 0, drink_total = 0;

    printf("Welcome to the Restaurant!\n");
    printf("\n--- MENU ---\n");
    printf("1. Pizza - ₹199\n");
    printf("2. Burger - ₹99\n");
    printf("3. Pasta - ₹149\n");
    printf("4. Fries - ₹49\n");
    printf("5. Drink - ₹19\n");

    do {
        printf("\nEnter your choice (1-5): ");
        scanf("%d", &ch);

        printf("Enter quantity: ");
        scanf("%d", &quantity);

        switch (ch) {
            case 1:
                pizza_qty += quantity;
                pizza_total += pizza * quantity;
                printf("Pizza x %d added to order\n", quantity);
                break;
            case 2:
                burger_qty += quantity;
                burger_total += burger * quantity;
                printf("Burger x %d added to order\n", quantity);
                break;
            case 3:
                pasta_qty += quantity;
                pasta_total += pasta * quantity;
                printf("Pasta x %d added to order\n", quantity);
                break;
            case 4:
                fries_qty += quantity;
                fries_total += fries * quantity;
                printf("Fries x %d added to order\n", quantity);
                break;
            case 5:
                drink_qty += quantity;
                drink_total += drink * quantity;
                printf("Drink x %d added to order\n", quantity);
                break;
            default:
                printf("Invalid choice, please try again.\n");
        }

        printf("\nDo you want to order anything else? (0/1): ");
        scanf(" %d", &c);

    }
    while (c == 1);


    total = pizza_total + burger_total + pasta_total + fries_total + drink_total;


    printf("\n--- YOUR ORDER ---\n");
    if (pizza_qty > 0) printf("Pizza x %d: ₹%d\n", pizza_qty, pizza_total);
    if (burger_qty > 0) printf("Burger x %d: ₹%d\n", burger_qty, burger_total);
    if (pasta_qty > 0) printf("Pasta x %d: ₹%d\n", pasta_qty, pasta_total);
    if (fries_qty > 0) printf("Fries x %d: ₹%d\n", fries_qty, fries_total);
    if (drink_qty > 0) printf("Drink x %d: ₹%d\n", drink_qty, drink_total);

    printf("\nYour total bill is: ₹%d\n", total);
    printf("Thank you for dining with us!\n");

    return 0;
}*/
