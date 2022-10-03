// to find the smallest number by using only operators
#include<stdio.h>
int main(){
    int a ;
    int b ;
    int c ;
    int d;
    printf( " Enter the first and second number \n");
    scanf( "%d%d" , &a , &b);
    c=(a<b);
    d=(a>b);
    printf("Small number will have 1 and greatre number will have 0  %d " , a ) ;
    printf("=> %d \n" , c);
    printf( "%d" , b );
    printf( " =>%d" , d );
    return 0;
}