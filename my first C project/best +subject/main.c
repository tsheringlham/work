#include <stdio.h>
#include <stdbool.h>

int main()
{
   float eng,dzo,math,sci;
   float average;

   printf("Enter your English mark:\n");
   scanf("%f",& eng);
   printf("Enter your Dzongkha mark:\n");
   scanf("%f",& dzo);
   printf("Enter your Maths mark:\n");
   scanf("%f",& math);
   printf("Enter your Science mark:\n");
   scanf("%f",& sci);
   average=((float)eng+dzo+math+sci)/4;
   printf("Average:%.2f\n\n",average);

   int min=math;
   if(sci<min)
   {
       min=sci;
   }if(eng<min)
   {
       min=eng;
   }

  float total= eng+ dzo+sci+ math-min;
  printf("Sum of Dzongkha + 2 subject is:%.2f\n",total);
    return 0;
}
