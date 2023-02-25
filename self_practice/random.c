// #include <stdio.h>
// int main()
// {
//     int m;
//     printf("Enter Marks (0-100) ");
//     scanf("%d", &m);
//     if (m >= 40 && m < 50)
//     {
//         printf("Pass\n");
//     }
//     else if (m > 50 && m < 60)
//     {
//         printf(" You are passed with 2rd division\n");
//     }
//     else if (m >= 60 && m < 75)
//     {
//         printf("You are passed with 1nd division\n");
//     }
//     else if (m >= 75 && m <= 100)
//     {
//         printf("You are passed with 1st division and honours\n");
//     }
//     else
//     {
//         printf("fail\n");
//     }
//     return 0;
// }
#include<stdio.h>
#include<string.h>
struct Member
{
char name[200];
int id;
int salery; 
};
int main()
{
struct Member obj;
strcpy(obj.name,"chetna");
obj.id=1;
obj.salery=48000;
printf("Name=%s\n",obj.name);
printf("id=%d\n",obj.id);
printf("salery=%d\n",obj.salery); 
}