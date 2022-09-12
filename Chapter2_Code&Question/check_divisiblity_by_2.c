// check the divisiblity of a number by two or check the even/odd of the given number
#include<stdio.h>
int main(){
    int number;
    printf("Enter the Number ");
    scanf("%d" , &number);
    number %= 2;
    printf( "%d" , number==0);
    return 0;

}