#include <stdio.h>
#include <string.h>

int main()
{
    int bank;
    printf("press 1 to take loan from BOB for production with interest of your choice.\n");
    printf("press 2 to take loan from BNB for services with interest of your choice\n");
    printf("press 3 to take loan from PNB for other purpose with interest of your choice\n");
    printf("Enter your choice;\t");
    scanf("%d",& bank);

    float TPC,LOAN,rate,months,EMI;
    float rate1,rate2,rate3;
    switch(bank)
    {
    case 1:
         printf("what is your Total Project cost: Nu\t\n");


         scanf("%f",&TPC);

         LOAN=0.7*TPC;
         printf("Your loan admissable is Nu: %f \n",LOAN);

         printf("Enter the interest rate:\t ");
         scanf("%f",&rate);

         printf("In how many months do you want to repay the loan:\t\n");
         scanf("%f",&months);
         rate1=rate/12/100;

         EMI=((LOAN*rate1)*pow(1+rate1,months))/(pow(1+rate1,months)-1);
         printf("Your EMI is:%f",EMI);
         break;
    case 2:
        printf("what is your Total Project cost: Nu\t\n");
         scanf("%f",&TPC);

         LOAN=0.7*TPC;
         printf("Your loan admissable is Nu: %f \n",LOAN);

         printf("Enter the interest rate:\t ");
         scanf("%f",&rate);

         printf("In how many months do you want to repay the loan:\t\n");
         scanf("%f",&months);
         rate2=rate/12/100;

         EMI=((LOAN*rate2)*pow(1+rate2,months))/(pow(1+rate2,months)-1);
         printf("Your EMI is:%f",EMI);
         break;
    case 3:
        printf("what is your Total Project cost: Nu\t\n");
         scanf("%f",&TPC);

         LOAN=0.7*TPC;
         printf("Your loan admissable is Nu: %f \n",LOAN);

         printf("Enter the interest rate:\t ");
         scanf("%f",&rate);

         printf("In how many months do you want to repay the loan:\t\n");
         scanf("%f",&months);
         rate3=rate/12/100;

         EMI=((LOAN*rate3)*pow(1+rate3,months))/(pow(1+rate3,months)-1);
         printf("Your EMI is:%f",EMI);
         break;

    }

  return 0;
}
