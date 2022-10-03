#include <stdio.h>
#include <math.h>
int store(int n, int arr[]);
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = 7;
    store(n, arr);
        printf("The updated array is  : ");
    for (int i = 0; i <= n; i++)
    {
        printf("%d \t", arr[i]);
    }
    return 0;
}
int store(int n, int arr[])
{
    for (int i = 0; i <= n; i++)
    {
        if (i == 7)
        {
            printf("Enter the last array : ");
            scanf("%d", &arr[7]);
        }
    }
    return 0;
}