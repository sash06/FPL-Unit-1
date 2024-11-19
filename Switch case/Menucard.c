#include<stdio.h>
int main(){
   
    int num,quantity,Total,no;
    int a=0, b=0, c=0, d=0, e=0, f=0;
    printf("\n Welcome to the World of Coffee Hotel \n");
   do 
    { 
    printf("\n          MENU CARD               \n ");
    printf("\n1.Espresso \n");
    printf("2.Cappuccino \n");
    printf("3.Latte \n");
    printf("4.Americano  \n");
    printf("5.Macchiato  \n");
    printf("6.Affogato  \n");
    printf("\n Enter a num for choice for menu:  ");
    scanf("%d",&num);
    
        switch(num)
        {
            case 1:
            printf("\n Espresso 150.00rs");
            printf("\n Enter the quantity: ");
            scanf("%d",&quantity);
            a=150*quantity;
            printf("\n Total=  %d rs ", a);
            break;

            case 2:
            printf("\n Cappuccino 315.00rs");
            printf("\n Enter the quantity: ");
            scanf("%d",&quantity);
            b=315*quantity;
            printf("\n Total=  %d rs ", b);
            break;

            case 3:
            printf("\n Latte 300.00rs");
            printf("\n Enter the quantity: ");
            scanf("%d",&quantity);
            c=300*quantity;
            printf("\n Total=  %d rs ", c);
            break;
            
            case 4:
            printf("\n Americano 400.00rs");
            printf("\n Enter the quantity: ");
            scanf("%d",&quantity);
            d=400*quantity;
            printf("\n Total=  %d rs ", d);
            break;
            
            case 5: 
            printf("\n Macchiato 390.00rs");
            printf("\n Enter the quantity: ");
            scanf("%d",&quantity);
            e=390*quantity;
            printf("\n Total=  %d rs ", e);
            break;
            
            case 6:
            printf("\n Affogato 500.00rs");
            printf("\n Enter the quantity: ");
            scanf("%d",&quantity);
            f=500*quantity;
            printf("\n Total=  %d rs ", f);
            break;
            
            default:
            printf("\n WRONG INPUT");
            break;
        }
        
        printf("\n Do you want to order anything else? (Yes/No): ");
        scanf(" %d", &no);
    } 
   while(no==1);
    Total=a+b+c+d+f+e;
    printf("\n--- YOUR ORDER ---\n");
    if(a>0){printf("Espresso     x %d = %drs\n",quantity, a);}
    if(b>0){printf("Cappuccino   x %d = %drs\n",quantity, b);}
    if(c>0){printf("Latte        x %d = %drs\n",quantity, c);}
    if(d>0){printf("Americano    x %d = %drs\n",quantity, d);}
    if(e>0){printf("Macchiato    x %d = %drs\n",quantity, e);}
    if(f>0){printf("Affogato     x %d = %drs\n",quantity, f);}

    printf("\nYour total bill is= %drs",Total);

    return 0;
}
