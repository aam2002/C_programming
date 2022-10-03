// Write the program to check if given character is digit or not
#include <stdio.h>
int main()
{
     char ch;
     printf("Enter number ");
     scanf("%c", &ch);
     printf(" If given character is digit it will be print 1 and if not then  0 :%d", (ch >= '0') && (ch <= '9'));
     return 0;
}

// BY IF ELSE METODE

// #include<stdio.h>
// int main(){
//     char ch;
//     printf("enter a number : \n");
//     scanf("%c",&ch );
//     if(ch>='0' && ch<='9')
//      {
//           printf  ("it is dight");
//      }
//      else
//      {
//           printf ("not digit");
//      }
//      return 0;
// }
#include <stdio.h>

int main()
{

     int a = 10;
     do
     {
          printf("value of a: %d\n", a);
          a = a + 1;
     } while (a < 20);

     return 0;
}