#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    char arr[500];
    char ch;
    int count = 0;
    printf("Enter Anything  : ");
    for (int i = 0; ch!='\n'; i++)
    {
        scanf("%c",&ch);
        arr[i]=ch;
        if (arr[i] == 'x')
        {
            count++;
        }
    }
    printf("character 'x' comes %d times in your sentence", count);
    return 0;
}