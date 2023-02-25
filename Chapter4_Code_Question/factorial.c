// to print the factorial of the given number
#include<stdio.h>
int main(){
    int n ,a, factorial=1;
    printf("Enter the number ");
    scanf("%d",&n);
    for (int i=1; i<=n; i++){
     factorial*=i;
    }
    printf("final factorial is %d" , factorial);
}
