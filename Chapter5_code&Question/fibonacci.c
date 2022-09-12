#include<stdio.h> 
int fib (int n);
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d" , &n);
    fib(n);
}
int fib(int n){
    if(n==0){
        return 0;
    }
    if (n==1){
        return 1;
    }
    int fibNm1 , fibNm2;
    fibNm1=fib(n-1);
    fibNm2=fib(n-2);
    int fib=fibNm1+fibNm2;
    printf("%d \n" , fib);
    return fib;

}