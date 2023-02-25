#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
int array(char ar[]);

int main()
{
    printf("Enter anything :");
    char input[500];
    fgets(input, 500, stdin);
    // printf("There are total %d vowels \n",
    array(input);
    return 0;
}

int array(char ar[])
{
    int count = 0;
  
    for (int i = 0; ar[i] != '\0'; i++)
    {
        if (ar[i] == 'a' || ar[i] == 'e' || ar[i] == 'o' || ar[i] == 'i' || ar[i] == 'u')
        {
           ar[i]=toupper(ar[i]);
           
        }
        printf("%c", ar[i]);
    }
return 0;
}
