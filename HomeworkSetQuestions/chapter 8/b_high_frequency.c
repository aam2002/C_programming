// program to print higest frequency character
#include <stdio.h>
#include <math.h>
#include <string.h>
int highfa(char in[]);
int main()
{
    char input[1000];
    printf("Enter anything ");
    fgets(input, 1000, stdin);
    highfa(input);
    return 0;
}
int highfa(char in[])
{
    char higiest_c = '\0';
    int higiest_i = 0;
    int n = strlen(in);
    char count[200];
    char str[1000];
    for (int m = 0; in[m] != '\0'; m++)
    {
        str[m] = in[m];
    }
    for (int i = 0; i < n; i++)
    {
        int c = 0;
        for (int j = i; str[j] != '\0'; j++)
        {
            if (in[i] == str[j])
            {
                c++;
                if (higiest_i < c)
                {
                    higiest_i = c;
                    higiest_c = in[i];
                }
            }
        }
    }
    printf("Highest frequency character is '%c' it comes '%d' times \n", higiest_c, higiest_i);
    return 0;
}
// #include <stdio.h>
// #include <string.h>
// int stringlength(char *s)
// {
//     int j;
//     for (j = 0; s[j]; j++)
//         ;

//     return j;
// }
// void printmax(char *s)
// {
//     int a[1000], i, j, k = 0, count = 0, n;

//     n = stringlength(s);

//     for (i = 0; i < n; i++)
//     {
//         a[i] = 0;
//         count = 1;
//         if (s[i])
//         {

//             for (j = i + 1; j < n; j++)
//             {

//                 if (s[i] == s[j])
//                 {
//                     count++;
//                     s[j] = '\0';
//                 }
//             }
//         }
//         a[i] = count;
//         if (count >= k)
//             k = count;
//     }
//     printf("maximum occuring characters ");
//     for (j = 0; j < n; j++)
//     {

//         if (a[j] == k)
//         {
//             printf(" '%c',", s[j]);
//         }
//     }

//     printf("\b=%d times \n ", k);
// }

// int main()
// {

//     char s[1000];

//     printf("Enter  the string : ");
//     gets(s);
//     printmax(s);

//     return 0;
// }
