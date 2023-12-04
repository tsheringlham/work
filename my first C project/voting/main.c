
#include<stdio.h>
#define CANDIDATE_COUNT
#define CANDIDATE1 "DNT"
#define CANDIDATE2 "PDP"
#define CANDIDATE3 "DTT"
#define CANDIDATE4 "DPT"
int votescount1=0, votescount2=0, votescount3=0;
void castvote(){
   int choice;
   printf("Enter your choice\n");



   printf("1. %s\n", CANDIDATE1);
   printf("2. %s\n", CANDIDATE2);
   printf("3. %s\n", CANDIDATE3);
   printf("4. %s\n",CANDIDATE4);

   printf("Input your choice (1 - 4) : ");
   scanf("%d",&choice);
   switch(choice){
      case 1: votescount1++; break;
      case 2: votescount2++; break;
      case 3: votescount3++; break;
      default: printf("Error: Wrong Choice !! Please retry");
      //hold the screen
      getchar();
   }
   printf("thanks for vote !!");
}
void votesCount(){
   printf(" Voting Statics ");
   printf("%s - %d ", CANDIDATE1, votescount1);
   printf("%s - %d ", CANDIDATE2, votescount2);
   printf("%s - %d ", CANDIDATE3, votescount3);
}
int main(){
   int i;
   int choice;
   int cid,age;
   printf("Please,enter your CID:\n");
   scanf("%d",& cid);
   printf("Please,enter your AGE:\n");
   scanf("%d",& age);

   if(age>=18)
   {
       printf("You are eligible to vote!\n");
   }else
   {
       printf("You are not eligible to vote!");
   }
   do{
      printf("Welcome to Election/Voting 2023\n ");
      printf("1. Cast the Vote\n");
      printf("2. Find Vote Count\n");
      printf("3. Leading candidate\n");
      printf("Please enter your choice : ");
      scanf("%d", &choice);
      switch(choice){
         case 1: castvote();break;
         case 2: votesCount();break;
         default: printf("Error: Invalid Choice");
      }
   }while(choice!=0);
   //hold the screen
   getchar();
   return 0;
}
