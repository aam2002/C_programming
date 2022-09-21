// to find the sum of n numbers

#include <stdio.h>
int main()
{
  int n, sum = 0;

  printf("enter number : ");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    sum += i;
  }
  printf(" the sum of no. is : %d \n", sum);
  for (int i = n; i >= 1; i--)
  {
    printf("%d \n", i);
  }
  return 0;
}
// we can write this like this also
#include <stdio.h>
int main()
{
  int n, sum = 0;

  printf("enter number : ");
  scanf("%d", &n);
  for (int i = 1, j = n; i <= n && j >= 1; i++, j--)
  // we can also write like this
  // for (int j=1 ; j>=1; j)
  //   {
  //   sum += j;
  //   printf("%d \n", j);

  //   return 0;
  // }
  {
    sum += i;
    printf("%d \n", j);

    return 0;
  }