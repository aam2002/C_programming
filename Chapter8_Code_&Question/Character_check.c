#include <stdio.h>
#include <string.h>
#include <math.h>
int arraycheck(char ar[], char ch);
int main()
{
    char input[500];
    char ch;
    printf("Enter Sentenct for checking : ");
    fgets(input, 500, stdin);
    printf("Enter char Character : ");
    scanf("%c", &ch);
    arraycheck(input, ch);
    return 0;
}
int arraycheck(char ar[], char ch)
{
    for (int i = 0;; i++)
    {
        if (ar[i] == ch)
        {
            printf("Yes the %c is present in the sentence ", ch);
            break;
        }
        if (ar[i] == '\0')
        {
            printf("Your character is not presente");
            break;
        }
    }
    return 0;
}
