#include <stdio.h>
int main() {
   const int maxInput = 5;
   int i;
   double number, average, sum = 0.0;
   for (i = 1; i <= maxInput; ++i) {
      printf("%d. Enter a number: ", i);
      scanf("%lf", &number);
      // go to jump if the user enters a negative number
      if (number < 0.0) {
         goto jump;
      }
      sum += number;
   }
jump:
   average = sum / (i - 1);
   printf("Sum = %.2f\n", sum);
   printf("Average = %.2f", average);
   return 0;
}
// #include<stdio.h>
// int area(int l , int b);
// int main()
// {
//     int l , b;
//     printf("Enter the length of Rectangle : ");
//     scanf("%d", &l);
//     printf("Enter the bredth of Rectangle : ");
//     scanf("%d", &b);
//     area(l,b);
// }
// int area(int l , int b)
// {
//     int area;
//     area = l*b;
//     printf("Area of Rectangle = %d", area);
//     return 0;
// }

