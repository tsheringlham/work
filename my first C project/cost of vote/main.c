#include <stdio.h>
#include <stdbool.h>

int main()
{
   float Nu=5,input;
   char karma,nima,dawa,sangay


   ;
   int yourchoice;

   printf("cast your vote by entering your choice:\n");
   printf(" press 1 to vote for karma\n press 2 to vote for nima\n press 3 to vote for dawa\n press 4 to vote for sangay\n");
   scanf("%i",& yourchoice);

   switch(yourchoice)
   {
   case 1:
    printf("You voted for Karma!\n");

    printf("Nu.5 per vote\n");
    printf("Enter amount Nu. :");
    scanf("%f",& input);
    float a=(float)input/Nu;
    printf("You have voted: %.f times",a);
    break;
   case 2:
    printf("You voted for Karma!\n");

    printf("Nu.5 per vote\n");
    printf("Enter amount Nu. :");
    scanf("%f",& input);
    float b=(float)input/Nu;
    printf("You have voted: %.f times",b);
    break;
   case 3:
    printf("You voted for Karma!\n");

    printf("Nu.5 per vote\n");
    printf("Enter amount Nu. :");
    scanf("%f",& input);
    float c=(float)input/Nu;
    printf("You have voted: %.f times",c);
    break;
   case 4:
    printf("You voted for Karma!\n");

    printf("Nu.5 per vote\n");
    printf("Enter amount Nu. :");
    scanf("%f",& input);
    float d=(float)input/Nu;
    printf("You have voted: %.f times",d);
    break;

   }
    return 0;
}
