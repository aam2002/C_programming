#include <stdio.h>
int area(int l , int b);
int main()
{
    int l , b;
    printf("Enter the length of Rectangle : ");
    scanf("%d", &l);
    printf("Enter the bredth of Rectangle : ");
    scanf("%d", &b);
    area(l,b);
}
int area(int l , int b)
{
    int area;
    area = l*b;
    printf("Area of Rectangle = %d", area);
    return 0;
}