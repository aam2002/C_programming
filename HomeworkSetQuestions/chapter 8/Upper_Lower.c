#include <stdio.h>
#include <math.h>
#include <string.h>
#include<ctype.h>
int ChangeCase(char in[]);
int main()
{
    char input[1000];
    printf("enter the statement -: ");
    fgets(input, 1000, stdin);
    ChangeCase(input);
    return 0;
}
int ChangeCase(char in[])
{
    char str[1000];
    for (int i = 0; in[i] != '\0'; i++)
    {
        str[i] = toupper(in[i]);
        if (str[i] == in[i])
        {
            str[i] = tolower(str[i]);
        }
        printf("%c", str[i]);
    }
return 0;
}