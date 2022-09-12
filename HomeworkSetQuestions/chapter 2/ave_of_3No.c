// Average of three number 
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter frist number " );
    scanf("%d" , &a);
    printf("Enter Second number " );
    scanf("%d" ,&b);
    printf("Enter third number " );
    scanf("%d" ,&c); 
    float d = a+b+c;
    printf("Average of first , second and third number is : %f " , d/3);   
}