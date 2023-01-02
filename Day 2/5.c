#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter the range:\n");
    scanf("%d", &n);
    printf("\n");
    for (i = n; i >= 1; i--)
    {
        for (j = i; j <= n; j++)
        {
            printf("%c", 'A' + j - 1);
        }
        printf("\n");
    }
    return 0;
}