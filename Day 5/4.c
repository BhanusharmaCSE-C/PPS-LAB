#include <stdio.h>
int main()
{
    int n, k, a[100], i, j, c;
    printf("Enter the value of n:\n");
    scanf("%d", &n);
    printf("Enter the value of k:\n");
    scanf("%d", &k);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 1; i <= n; i++)
    {
        if ((a[i] - a[i + 1] == 1 || a[i + 1] - a[i] == 1) && a[i] < k)
        {
            printf("%d %d ", a[i], a[i + 1]);
            c = 0;
        }
    }
    if (c != 0)
        printf("-1 ");
}