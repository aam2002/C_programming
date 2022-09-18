#include <stdio.h>
int maxi(int *a, int *b);
int main()
{
    int a, b;
    printf("Enter the two numbers \n");
    scanf("%d %d", &a, &b);
    printf("The great number is : ");
    maxi(&a, &b);
    // printf("a = %d \nb = %d", a, b);
}
int maxi(int *a, int *b)
{
    if (*a > *b)
    {
        printf("%d\n", *a);
    }
    else
    {
        printf("%d\n", *b);
    }
    return 0;
}
// int c=(*a);
// *a=*b;
// *b=c;