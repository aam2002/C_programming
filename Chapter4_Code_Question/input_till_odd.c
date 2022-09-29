#include <stdio.h>
int main()
{
    int n;
    for (int i = 1; ;i++)
    {
        printf("Enter the even number ");
        scanf("%d", &n);
        if (n % 2 != 0)
        {
            printf("You have entered odd number!!! \n");
            break;
        }
    }
    return 0;
}