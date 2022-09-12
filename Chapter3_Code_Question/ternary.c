//ternary operator
#include<stdio.h>
int main(){
    int age;
    printf( "Enter age " );
    scanf( "%d" , &age);
    age>18? printf("you are adult") : printf("you are child");
    return 0 ;
}

