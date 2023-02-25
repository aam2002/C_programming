// root of qradratic equation 
#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
     int a , b , c ;
     float x1 , x2;
     printf("Enter the coefficient of Quadratic Equation \na = ");
     scanf("%d",&a);
     printf("b = ");
     scanf("%d",&b);
     printf("c = ");
     scanf("%d",&c);
     printf("ax^2 + bx + c = %dx^2 + %dx + %d \n",a,b,c);
     x1=((-b)+sqrt((b*b-4*a*c)))/(2*a);
     x2=((-b)-sqrt((b*b-4*a*c)))/(2*a);
     printf("the root of given qradric equation are %f and %f",x1,x2);   
     return 0 ;
 }