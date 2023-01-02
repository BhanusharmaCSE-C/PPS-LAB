
#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter the range:\n");
    scanf("%d", &n);
    printf("\n");
    for(i=1;i<=2*n-1;i++)
    {
        for(j=1;j<=2*n-1;j++)
        {
            if(i==1 || i==2*n-1 || j==1 || j==2*n-1)
            printf("%d", n);
            else if(j==n && i==n)
            printf("%d", n-2);
            else if(i!=1 || i!=2*n-1 || j>1 && j<2*n-1)
            printf("%d", n-1);

        }
        printf("\n");
    }
}
