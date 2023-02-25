// Write a C program to find the factorial of a given integer number using
// both recursive and non-recursive functions
#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int n, fac = 1;
    printf("Enter the number :");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        fac = fac * i;
    }
    printf("factoral of %d is:%d", n, fac);
    return 0;
}
#include <stdio.h>
#include <math.h>
#include <string.h>
int factorial(int fac);
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    printf("%d", factorial(n));

    return 0;
}
int factorial(int fac)
{
    int x;
    if (fac == 1)
    {
        return 1;
    }
    x = factorial(fac - 1);
    int f = x * fac;
    return f;
}