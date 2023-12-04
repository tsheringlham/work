#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main()
{
   int amount=100000;
   char account[20]="5100189929001";
   char replace[]="xxxxx89929001";
   char myname[]="Arti Biswa",type[]="BNB";
   int choice;
   char y;
   float withdraw,deposit,balance;

   while (1)
   {
       printf("\n1.Balance Enquiry\n2.Withdraw\n3.Deposit\n4.Personal Information\n5.Log out");
       printf("\n\nEnter your choice:\t");
       scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("Dear Customer,Your A/C \t");
        y = printf(strcpy(account,replace));
        printf("\tbalance is BTN %d\n",amount);
        break;
    case 2:
        printf("\nEnter the amount you want to withdraw\t ");
        scanf("%f",& withdraw);
         balance = amount-withdraw;
        if (withdraw<amount)
        {
            printf("Dear Customer,Your A/C \t");y = printf(strcpy(account,replace));
            printf("\thas been debited by BTN %.2f and your A/C balance is BTN %.2f\n",withdraw,balance);
        }else
        {
            printf("Insufficient balance");
        }break;
    case 3:
        printf("\nEnter the amount you want to deposit\t ");
        scanf("%f",& deposit);
        balance = amount+deposit;

        printf("Dear Customer,Your A/C \t");y = printf(strcpy(account,replace));
        printf("\thas been deposited by BTN %.2f and your A/C balance is BTN %.2f\n",deposit,balance);
        break;
    case 4:
        printf("Name: %s\nAccount type: %s\nAccount:%s\n",myname,type,account);
        break;
    case 5:
        printf("THANK YOU! FOR CHOOSING BNB\n");
        return 0;
    default:
        printf("Invalid choice.Please,try again\n");


    }
   }
    return 0;
}
