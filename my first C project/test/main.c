#include <stdio.h>
#include <stdlib.h>

int main()
{int x = 10, y = 20, z= 30;
 int sum = x+y+z;
 float myfloat = (float)sum;
 int ans = sum / 9;

 int A = 13;
 int B = 17;
 int C ;
 B = A;
 C = B;
 int product = A*B*C;

 printf("%i\n",sum);
 printf("%.4f\n",myfloat);
 printf("%i\n",ans);

 printf("%i\n",B);
 printf("%i\n",C);
 printf("%i",product);


    return 0;
}
