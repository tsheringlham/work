#include <stdio.h>
#include <stdbool.h>

int main()
{
    int time=0;
    printf(" Press 1 for Morning Prayer.\n Press 2 for Evening Prayer.\n Press 3 for Other Prayers.\n\n Enter your choice:\t");
    scanf("%d",& time);

    int morning,evening,other;
    switch(time)
    {
    case 1:
        printf(" Enter 1 for Tashi Tshegpa\n Enter 2 for Jamyang Sueldep\n");
        scanf("%d",& morning);

        if(morning==1)
        {
            printf("Tashi Tshegpa\n");
        }else if(morning==2)
        {
            printf("Jamyang Sueldep");
        } else
        {
            printf("Input Error");
        }break;
    case 2:
        printf(" Enter 1 for Barchoe Lamsel.\n Enter 2 for Sampa Lendup\n");
        scanf("%d",& evening);
        if(evening==1)
        {
            printf("Barchoe Lamsel");
        }else if(evening ==2)
        {
            printf("Sampa Lendup");
        }else
        {
            printf("Input Error");

        } break;
    case 3:
        printf(" Enter 1 for Tomchoe\n Enter 2 for Zhaptoen\n Enter 3 for Dema\n");
        scanf("%d",& other);
        break;
    }if(other==1)
    {
        printf("Tomchoe");
    }else if(other==2)
    {
        printf("Zhaptoen");
    }else if(other==3)
    {
        printf("Dema");
    }else
    {
        printf("Input Error");


    }
    return 0;
}
