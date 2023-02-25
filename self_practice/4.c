#include <stdio.h>
#include <math.h>
#include <string.h>
int binary(int num);
int main()
{
  int num;
  printf("Enter the number :");
  scanf("%d", &num);
  binary(num);

  return 0;
}
int binary(int num)
{
  for (int i = 0;num != 0; i++)
  {
    int rum = num % 2;
    printf("%d", rum);
    num = num / 2;
  }

  return 0;
} 
