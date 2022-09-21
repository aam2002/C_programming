
#include <stdio.h>

int main()
{
    int n;
    for (int i=0;;i++)
    {
    printf("Enter the number ");
    scanf("%d", &n);
        if (n%7== 0)
        {
            printf("You have entered the number which is multiple of 7 \n");
            break;
        }
    }
    return 0;
}
