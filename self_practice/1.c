// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("enter the number: \n");
//     scanf("%d", &n);
//     for (int i = 0; i <= n; i++)
//     {
//         for (int k = n-i; k >= 0; k--)
//         {
//             printf(" ");
//         }
//         for (int j = 0; j <= i; j++)
//         {

//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }
// #include <stdio.h>
// int main(){
//    int a =10,b;
//    printf("Enter your number\n");
//    scanf("%d", &b);
//    while(a){
//       printf("%d x %d = %d\n",b,a--,b*a);
//    }

//    return 0;
// }
#include<stdio.h>
int main() {
  double first, second, temp;
  printf("Enter first number: ");
  scanf("%lf", &first);
  printf("Enter second number: ");
  scanf("%lf", &second);

  // value of first is assigned to temp
  temp = first;

  // value of second is assigned to first
  first = second;

  // value of temp (initial value of first) is assigned to second
  second = temp;

  // %.2lf displays number up to 2 decimal points
  printf("\nAfter swapping, first number = %.2lf\n", first);
  printf("After swapping, second number = %.2lf", second);
  return 0;
}