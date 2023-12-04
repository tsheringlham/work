#include <stdio.h>
#include <stdbool.h>

int main()
{
    int eng = 71, dzo = 64, math = 55, sci = 85;
    float average = (float)(eng+dzo+math+sci)/4;
     int passmark = 50;



    printf("%.2f\n",average);
    printf("%d",average >= passmark);

    return 0;
}
