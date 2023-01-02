#include <stdio.h>
int main()
{
    int bs, hra, da, pf, ts, allow;
    char ch;
    printf("Enter the Basic Salary:");
    scanf("%d", &bs);
    hra = (20 * bs) / 100;
    da = (50 * bs) / 100;
    pf = (11 * bs) / 100;
    printf("Enter the grade(Upper case only):");
    scanf("%c", &ch);
    printf("\nTotal salary = ");
    if (ch == 'A')
    {
        allow = 1700;
        ts = bs + hra + da + allow - pf;
        printf("%d", ts);
    }
    else if (ch == 'B')
    {
        allow = 1500;
        ts = bs + hra + da + allow - pf;
        printf("%d", ts);
    }
    else
    {
        allow = 1300;
        ts = bs + hra + da + allow - pf;
        printf("%d", ts);
    }
}
