#include <stdio.h>
int main()
{
    int n, c, n2;
    printf("Enter number ");
    scanf("%d%d", &n, &n2);
    for (int i = n; i <= n2; i++)
    {
            c = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                c++;
            }
        }
        if (c == 2)
        {
            printf("%d\n", i);
        }
    }
}
