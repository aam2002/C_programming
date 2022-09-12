// Check the given number is positive and negative and also check the number is odd/even if number is positive
#include<stdio.h>
int main(){
    int num;
    printf("Enter number : ");
    scanf("%d",&num);
    if (num>=0){
        printf("Given number is positive");
        if( num%2 == 0){
            printf(" and even");
            
        }
        else{
            printf(" and odd");
        }
    }
        else{
printf( "Given number is negitive ");
        }
        return 0;
}