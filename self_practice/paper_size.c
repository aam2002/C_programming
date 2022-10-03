#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int a = 0;
    int h = 1189;
    int w = 841;
    for (int i = 1; i < 10; i++)
    {
        a = h;
        h=w;
        w = (a / 2);

        printf("The size of A%d is %dmm * %dmm \n", i, h, w);
    }
    return 0;
}