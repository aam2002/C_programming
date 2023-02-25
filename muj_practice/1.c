// Write a C program to find the sum of individual digits of a positive integer.
#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int n, sum = 0, j;
    printf("Enter the number ");
    scanf("%d", &n);
    for (int i = 0; n != 0; i++)
    {
        j = n % 10;
        sum = sum + j;
        n = n / 10;
    }
    printf("%d", sum);
    return 0;
}