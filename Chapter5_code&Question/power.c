//square of the number using built in library function
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("enter the number : ");
    scanf("%d", &n);
    printf("Square of the number is : %f \n" ,  pow(n,2));
    return 0;
}