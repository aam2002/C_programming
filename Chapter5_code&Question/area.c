// Area of square/ractangle/circle
#include <stdio.h>
void circlearea(float radius);
void squarearea(int side);
void rectanglearea(int leangth, int bredth);
void circlearea(float radius)
{
    printf("%f", 3.14 * radius * radius);
}
void squarearea(int side)
{
    printf("%d", side * side);
}
void rectanglearea(int length, int bredth)
{
    printf("%d", length * bredth);
}
int main()
{
    printf("what do you want to print \n for area of square enter 's' \n for area of rectangle enter 'r' \n for area of circle enter 'c' \n");
    char ch;
    scanf("%c", &ch);
    if (ch == 's')
    {
        int side;
        printf("Enter side : \n");
        scanf("%d", &side);
        printf("Area of square is : ");
        squarearea(side);
    }
    else if (ch == 'r')
    {
        int length, bredth;
        printf("Enter length and bredth : \n");
        scanf("%d%d", &length, &bredth);
        printf("Area of rectangel is : ");
        rectanglearea(length, bredth);
    }
    else if (ch == 'c')
    {
        float radius;
        printf("Enter radius : \n");
        scanf("%f", &radius);
        printf("Area of circle is : ");
        circlearea(radius);
    }
    else
    {
        printf("INVALID INPUT");
    }
    return 0;
}