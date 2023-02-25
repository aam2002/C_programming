#include <stdio.h>
int fib(int n);
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    fib(n);
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d, ", fib(i));
    // }
}
// int fib(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     else if (n==1)
//     {
//         return 1;
//     }
//     else
//     {
//         return fib(n - 1) + fib(n - 2);
//     }
//     return 0;
// }
int fib(int n)
{
    int a = 0, b = 1, c;
    for (int i = 0; i < n; i++)
    {
        c = a + b;
        printf("%d",a);
        a = b;
        b=c;   
         }
 return 0;
}
// fibonacci() funtion definition
// #include<stdio.h>
// int fibonacci(int num)
// {
//     // first base condition check
//     if (num == 0)
//     {
//         return 0; // retuning 0, if condition meets
//     }
//     // second base condition check
//     else if (num == 1)
//     {
//         return 1; // returning 1, if condition meets
//     }
//     // else calling the fibonacci() function recursively till we get to the base conditions
//     else
//     {
//         return fibonacci(num - 1) + fibonacci(num - 2); // recursively calling the fibonacc() function and then adding them
//     }
// }

// int main()
// {
//     int num; // variable to store how many elements to be displayed in the series
//     printf("Enter the number of elements to be in the series : ");
//     scanf("%d", &num); // taking user input

//     for (int i = 0; i < num; i++)
//     {
//         printf("%d, ", fibonacci(i)); // calling fibonacci() function for each iteration and printing the returned value
//     }

//     return 0;
// }