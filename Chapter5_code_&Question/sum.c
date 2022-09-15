#include<stdio.h>
int sum(int a, int b);
int main (){
    int a , b;
    printf("enter first and second  number \n ");
    scanf("%d \n %d", &a ,&b);
    int c =sum(a,b);
    printf("sum is : %d \n" ,c);
   
}
int sum( int a , int b){
    return b+a;
}