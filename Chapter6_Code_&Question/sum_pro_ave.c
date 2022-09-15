#include<stdio.h>
int ave(int *a , int *b);
int pro(int *a , int *b);
int sum(int *a , int *b);
int main(){
    int a , b;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    printf("the Average of two no is : %d" , ave(&a,&b));
    pro(&a,&b); 
    sum(&a,&b);
    return 0;
}
int pro(int *a , int *b){
    int c= (*a)*(*b);
    return 0;
}
int ave(int *a , int *b){
    int c=((*a)+(*b))/2;
    return c;
}
int sum(int *a , int *b){
    int c = (*a)+(*b);
    return 0;
}