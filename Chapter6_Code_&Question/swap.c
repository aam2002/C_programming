#include<stdio.h>
void ptr(int *x , int *y);
int main (){
    int a , b ;
    a=2;
    b=3;
    ptr(&a,&b);
    printf ("a = %d\nb = %d" , a , b );
    return 0;
}
void ptr(int *x , int *y ){
    int c = *x;
    *x=*y;
    *y=c;
}