#include <stdio.h>
int main()
{
  int i, n, j, k = 1;
  printf("Enter the range:\n");
  scanf("%d", &n);
  printf("\n");
  for (i = 65; i <= 65 + n; i++)
  {
    for (j = 65; j <= i; j++)
    {
      printf("%c", i);
    }
    printf("\n");
  }
}
