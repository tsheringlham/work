#include <stdio.h>
#include <stdbool.h>

int main()
{
   int num;

   printf("Press 1 to find the time taken to download a file in MB\n");
   printf("Press 2 to find the time taken to download a file in KB\n");
   printf("Press 3 to find the time taken to download a file in GB\n");
   scanf("%d",& num);

   float mb,kb,gb;
   switch (num)
   {
   case 1:
    printf("Enter the file size in MB \n");
    scanf("%f",& mb);
    float ans1= mb*0.1875;
    printf(" the time taken to download the file is %f second\n",ans1);
    float x = (float)(ans1/60);
    printf(" the time taken to download the file is %f minutes\n",x);
    float a = x/24;
    printf(" the time taken to download the file is %f hours",a);

    break;

   case 2:
    printf("Enter the file size in KB \n");
    scanf("%f",& kb);
    float ans2 = kb/(1024*5.3333);
    printf("The time taken to download the file is %f second\n",ans2);
    float y = (ans2/60);
    printf("The time taken to download the file is %f minutes\n",y);
    float b = y/24;
    printf("The time taken to download the file is %f hours",b);

    break;

   case 3:
    printf("Enter the file size in GB \n");
    scanf("%f",& gb);
    float ans3 = gb/(5.333/1024);
    printf("The time taken to download the file is %f second\n",ans3);
    float z = (ans3/60);
    printf("The time taken to download the file is %f minutes\n",z);
    float c = z/24;
    printf("The time taken to download the file is %f hours",c);

    break;

   default:
    printf("Invalid ");

   }
    return 0;
}
