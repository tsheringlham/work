#include <stdbool.h>

int main()
{
    int eng;
    int dzo;
    printf("Enter your eng mark :\n");
    scanf("%d",& eng);
    printf("Enter your dzo mark :\n");
    scanf("%d",& dzo);
    float average = ((float)(eng + dzo))/2;
    printf("%.2f\n",average);
    bool isaverage = (average>=50);
    printf("%d\n",isaverage);
    if (isaverage){printf("Pass\n");}
    else{printf("Fail");}
    return 0;
}
