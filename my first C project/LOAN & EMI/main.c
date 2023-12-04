#include <stdio.h>
#include <string.h>

int main()
{
    int bank;
    printf("press 1 to take loan from BOB for production with interest of 6 percent\n");
    printf("press 2 to take loan from BNB for services with interest of 7 percent\n");
    printf("press 3 to take loan from PNB for other purpose with interest of 8 percent\n");
    printf("Enter your choice;\t");
    scanf("%d",& bank);

    float TPC,LOAN,ROI;
   float rate1;
    switch(bank)
    {
    case 1:
        printf("\nTotal project cost is:\t");
        scanf("%f",& TPC);
        LOAN= 0.7*TPC;
        printf("\nYour loan is :%.2f\t",LOAN);
        printf("\nYour rate of interest:\t");
        scanf("%.2f",& ROI);
        rate1= ROI/12/100;
        printf("%f",rate1);


        break;

    }


    return 0;
}
