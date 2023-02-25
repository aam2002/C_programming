//Largest No. among two numbers
#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
     int a , b;//a and b are two numbers 
     printf("Enter the two numbers : ");
     scanf("%d %d",&a,&b);//taking input of two numbers 
     if(a>b){//checking a is grater than b
        printf("%d is Grater than %d",a,b);
     }
     else{//checking b is grater than a
        printf("%d is Grater than %d",b,a);
     }
     return 0;
 }