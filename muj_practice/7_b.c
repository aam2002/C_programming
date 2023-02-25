/* b. Write a C program, to add two matrices using an Array. */
#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int n, m;
    printf("Enter the number of rows and columns for  2d array : ");
    scanf("%d%d", &n, &m);
    int arr1[n][m], arr2[n][m], sum[n][m];
    printf("Enter the elements of 1st array : \n");
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
            scanf("%d", &arr1[j][i]);
        }
    }
    printf("Enter the elements of 2nd array : \n");
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
            scanf("%d", &arr2[j][i]);
        }
    }
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
            sum[j][i] = arr1[j][i] + arr2[j][i];
        }
    }
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
            printf("%d \t", sum[j][i]);
        }
        printf("\n");
    }
    return 0;
}
