// #include<stdio.h>
// int main ()
// {
//    int a[4],i,sum=0;     
//    for(i=0;i<=4;i++)
//    {
//        printf("\nEnter Number");
//        scanf("%d",&a[i]);
//    }
//    for(int j=0;j<=4;j++)
//    {
//        sum=sum+a[j];
//    }
//    printf("\nSum of array numbers =%d",sum);
//    return 0;
// }
#include<stdio.h>
#include<string.h>
struct Employee
{
char name[20];
int day;
char month[10];
int year;
float salary;
};
int main()
{
struct Employee e[10];
int total_salary=0;
int n,i,t;
char month[10];
printf ("enter number of employees\n");
scanf ("%d",&n);
for (i=1; i<=n; i++)
{
printf("Input Values\n");
scanf("%s %d %s %d %f",e[i].name, &e[i].day, e[i].month, &e[i].year, &e[i].salary);
printf("%s %d %s %d %f\n", e[i].name, e[i].day, e[i].month, e[i].year, e[i].salary);
}
printf("enter the month for total salary\n");
scanf("%s",month);
for(i=1; i<=n; i++)
{
t=strcmp(e[i].month, month);
if(t==0)
total_salary = total_salary + e[i].salary;
}
printf ("The total salary for giving month = %d\n", total_salary);
return 0;
}
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str1[50], str2[50];
//     int i, j, n, m, l;
//     printf("Enter the string\n");
//     gets(str1); // scanf ("%s",str1);
//     printf("Enter the position of the required character:\n ");
//     scanf("%d", &n);
//     printf("Enter the required number of characters to be extracted:\n ");
//     scanf("%d", &m);
//     l = strlen(str1);
//     if (m+n-1<l)
//     {
//         for (i = n - 1, j = 0; i <= m + n - 1; i++, j++)
//             str2[j] = str1[i];
//         str2[j] = '\0';
//         printf("The extracted string is: %s", str2);
//     }
//     else
//         printf("string extraction is not possible");
//     return 0;
// }
// #include<stdio.h>
// #include<math.h>
// #include<string.h>
// int main(){
//      char input[50];
//      fgets(input,50,stdin);
//      printf("length of string : %d",strlen(input));
//      return 0;
//  }