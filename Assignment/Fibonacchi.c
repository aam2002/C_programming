//To print the fibonacchi series 
#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
     //input number
     int n;
     printf("Enter the Number till where you want to print ");
     //to take input of number
     scanf("%d",&n);
     //first two numbers to fibonacchi series
     printf("0\t1\t");
     int a=0, b=1, c;
     //loop for printing the fibonacchi series
     for(int i=0;i<n-2;i++){ 
        c=a+b;
        a=b;
        b=c;
        printf("%d\t", c);
     }
     return 0;
 }
 