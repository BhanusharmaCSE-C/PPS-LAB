#include <stdio.h>
int main()
{
    int n, i, s, k, j;
    printf("Enter the range:\n");
    scanf("%d", &n);
    printf("\n");
    for (i = 1; i <= n; i++)
    {
        for (s = i; s <= n - 1; s++)
        {
            printf(" ");
        }
        k = i;
        for (j = 1; j <= i; j++)
        {
            printf("%d", k--);
        }
        k = k + 2;
        for (j = 1; j < i; j++)
        {
            printf("%d", k++);
        }
        printf("\n");
    }
}