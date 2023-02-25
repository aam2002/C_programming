// Write a C Program - using if else statements, to find the largest number
// among the given two integer numbers
#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
     int n,m;
     printf("Enter two numbers : ");
     scanf("%d%d",&n,&m);
     if(n>m){
        printf("%d is grater then %d",n,m);
     }
     else{
        printf("%d is grater the %d",m,n);
     }
     return 0;
 }