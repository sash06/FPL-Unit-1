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