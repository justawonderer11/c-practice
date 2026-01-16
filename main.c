#include <stdio.h>
#include <stdlib.h>

int profit(int x, int y, int z)
{
    int totalprofit = x - y - z;
    return totalprofit;
}

int main()
{
    int emp=0;
    int sal=0;
    int mexp=0;
    int annc=0;
    int totalsalm = 0;
    int counter = 1;

    printf("Enter the number of employees: ");
    scanf("%d", &emp);

   for (int counter = 1; counter <= emp; counter++)
    {
        printf("Enter the salary of the %d employee: ", counter);
        scanf("%d", &sal);
        totalsalm += sal;

    }

    int totalempsalary = totalsalm * 12;

    printf("Enter the monthly expense of the company: ");
    scanf("%d", &mexp);
    int yexp = mexp * 12;

    printf("Enter the annual income: ");
    scanf("%d", &annc);

    printf("The total employees salary is: %d\n", totalempsalary);
    printf("The total expenses is: %d\n", yexp);

    int totalprofit = profit(annc, totalempsalary, yexp);
    printf("The total profit is: %d\n", totalprofit);

    if(totalprofit >= 100000)
        printf("excellent");
    else if(totalprofit >= 50000 && totalprofit < 100000)
        printf("good");
    else
        printf("not accepted");

    return 0;
}
