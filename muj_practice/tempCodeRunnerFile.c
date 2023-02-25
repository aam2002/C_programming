// Write a C program, which takes two integer operands and one operator form the user
// performs the operation and then prints the result.(Consider the operators +,-,*, /, % and
// use Switch Statement)
#include <stdio.h>
int main()
{
    char ch;
    int a, b;
    printf("Enter the two number : ");
    scanf("%d%d", &a,&b);
    printf("Enter the operation(symbole) you want to do with this two numbers : ");
    scanf("%s",&ch);
    switch (ch)
    {
    case '+':
        printf("%d%c%d = %d", a, ch, b, a + b);
        break;
    case '/':
        printf("%d%c%d = %d", a, ch, b, a / b);
        break;
    case '-':
        printf("%d%c%d = %d", a, ch, b, a - b);
        break;
    case '*':
        printf("%d%c%d = %d", a, ch, b, a * b);
        break;
    default:
        printf("wrong input");
        break;
    }
    return 0;
}