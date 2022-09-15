#include <stdio.h>
int fibo(int n);
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    fibo(n);
    return 0;
}
int fibo(int n)
{
    int fib[n];
    fib[0] = 0;
    fib[1] = 1;
    printf("%d\t%d\t",fib[0],fib[1]);
    for (int i=2;i<n;i++){
        fib[i]=fib[i-1]+fib[i-2];
        printf("%d \t" ,fib[i]);
    }
    return 0;
}