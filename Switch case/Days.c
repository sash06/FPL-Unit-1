#include<stdio.h>
int main(){
   
    int num;
   
    printf("\n Enter a num for day:  ");
    scanf("%d",&num);
    switch(num)
    {
    case 1:
    printf("\n Today is Monday ");
    break;
    case 2:
    printf("\n Today is Tuesday");
    break;
    case 3:
    printf("\n Today is Wednesday");
    break;
    case 4:
    printf("\n Today is Thursday");
    break;
    case 5: 
    printf("\n Today is Friday");
    break;
    case 6:
    printf("\n Today is Saturday");
    break;
    case 7:
    printf("\n Today is Sunday ");
    break;
    default:
    printf("\n Your number is not in Days");
    break;
    }
    return 0;
}