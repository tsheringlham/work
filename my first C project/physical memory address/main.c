#include <stdio.h>
#include <stdlib.h>

int main()
{
   int age = 30;
   int * page = &age;
   printf("%p",page);
    return 0;
}
