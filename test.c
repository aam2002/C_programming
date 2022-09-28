#include <stdio.h>
#include <math.h>
// make your own power function
int Power(int n, int p);
int main()
{
    int n, p;
    printf("enter a number\n");
    scanf("%d", &n);
    printf("enter the power which u want to find\n");
    scanf("%d", &p);
    printf("the power is %d", Power(n, p));

    return 0;
}

int Power(int n, int p)
{
    int pOTn;
    pOTn = pow(n, p);
    return pOTn;
}