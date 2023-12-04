# include <stdio.h>
# include <stdbool.h>

int main()
{
    int taxiable = 10000;
    int yoursalary;

    printf("Enter your salary :\n");
    scanf("%d", & yoursalary);

    if (yoursalary>=taxiable)
    {int tax = 0.12*yoursalary;
        printf("Tax\n");
        printf("Your tax is :%d",tax);
    }
    else
    {int bonus = 200+ yoursalary;
        printf("No Tax\n");
        printf("You need not pay tax, please take bonus Nu.200.Now your grand salary is %d",bonus);
    }

    return 0;
}
