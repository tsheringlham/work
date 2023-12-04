#include <stdio.h>
#include <stdbool.h>

int main()
{
    int votingage = 18;
    int myage;

    printf("VotingAge :18\n");
    printf("MyAge :\n");
    scanf("%d",& myage);
    if(myage>= votingage){
        printf("Eligible to vote!");
    }else{
    printf("Not eligible to vote!");}
    return 0;
}
