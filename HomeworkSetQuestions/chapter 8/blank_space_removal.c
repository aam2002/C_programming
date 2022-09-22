#include <stdio.h>
#include <math.h>
#include <string.h>
int spaceRm(char in[]);
int main()
{
    char input[1000];
    printf("enter the statement -: ");
    fgets(input, 1000, stdin);
    spaceRm(input);
    return 0;
}
int spaceRm(char in[])
{
    char str[1000];
    for (int i = 0; in[i] != '\0'; i++)
    {
        str[i] = in[i];
        if (in[i] == ' ')
        {
            continue;
        }
        printf("%c", str[i]);
    }
    return 0;
}