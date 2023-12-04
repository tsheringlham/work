#include <stdio.h>
#include<stdbool.h>

int main()
{
    printf("Fish = 200/Kg\n");
    printf("Beef = 400/Kg\n");
    printf("Pork = 300/Kg\n");
    printf("Chicken = 200/Kg\n");

    float Fish = 200;
    float Beef = 400 ;
    float Pork = 300;
    float Chicken =200;

    printf("How many Kg of Fish would you like to buy :\n");
    scanf("%f",& Fish);
    printf("How many Kg of Beef would you like to buy :\n");
    scanf("%f",& Beef);
    printf("How many Kg of Pork would you like to buy :\n");
    scanf("%f",& Pork);
    printf("How many Kg of Chicken would you like to buy :\n");
    scanf("%f",& Chicken);
    float totalamount = (float)(Fish *200)+(Beef*400)+ (Pork*300)+(Chicken*200);
    printf(" Total amount :%.5f\n",totalamount);
    printf("Thank you for visiting us ,please come again");

    return 0;
}




