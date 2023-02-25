/* 7a. Write a C program, to find both the largest and smallest number in a list of integers using an Array.*/
#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int n;
    printf("Enter the number of element you want in array :");
    scanf("%d", &n);
    int ar[n];
    printf("Enter the elements of array :");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ar[i]);
    }
    int min = ar[0], max = ar[0];
    for (int i = 1; i < n; i++)
    {
        if (min > ar[i])
        {
            min = ar[i];
        }
        if (max < ar[i])
        {
            max = ar[i];
        }
    }
    printf("The maximum of given array is : %d\n", max);
    printf("The minimum of given array is : %d", min);
    return 0;
}
