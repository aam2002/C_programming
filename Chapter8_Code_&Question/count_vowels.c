#include <stdio.h>
#include <math.h>
int array(char ar[]);
int main()
{
    printf("Enter anything :");
    char input[500];
    fgets(input, 500, stdin);
    printf("There are total %d vowels \n", array(input));
    return 0;
}
int array(char ar[])
{
    int count = 0;
    for (int i = 0; ar[i] != '\0'; i++)
    {
        if (ar[i] == 'a' || ar[i] == 'e' || ar[i] == 'o' || ar[i] == 'i' || ar[i] == 'u' ||
            ar[i] == 'A' || ar[i] == 'E' || ar[i] == 'I' || ar[i] == 'O' || ar[i] == 'U')
        {
            count++;
        }
    }
    return count;
}
