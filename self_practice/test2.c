#include <stdio.h>
int sum(int a , int b);
int main()
{
    int a, b;
    printf("Enter Two numbers : \n");
    scanf("%d %d", &a, &b);
    printf("Sum of two Number is %d" , sum(a,b));
    return 0;
}
int sum(int a , int b)
{
   return a+b;
}