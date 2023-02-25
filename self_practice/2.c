#include <stdio.h>
#include <math.h>
#include <string.h>
int sum(int num);
int main()
{
    int num;
    printf("Enter the number :");
    scanf("%d", &num);
    printf("%d", sum(num));
    return 0;
}
int sum(int num)
{
    if (num == 0)
    {
        return 0;
    }
    return num % 10 + sum(num / 10);
}