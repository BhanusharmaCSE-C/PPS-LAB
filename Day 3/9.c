#include <stdio.h>
#include <math.h>
int main()
{
    int i, j, k, n, w, sum = 0;
    printf("Enter the value of n:\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf(" ");
    }
}