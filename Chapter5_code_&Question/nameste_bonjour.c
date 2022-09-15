// to print namaste/bonjour using function
#include <stdio.h>
void namaste();
void bonjour();
int main()
{
    char ch;
    printf("Enter f for frenchg & i for indian : ");
    scanf("%c", &ch);

    if (ch == 'i')
    {
        namaste();
    }
    else if (ch == 'f')
    {
        bonjour();
    }
    else
    {
        printf(" you have entered unvalid input!!! \n");
    }
    return 0;
}
void namaste()
{
    printf("namaste \n");
}
void bonjour()
{
    printf("bonjour \n");
}