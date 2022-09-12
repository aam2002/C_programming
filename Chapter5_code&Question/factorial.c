#include<stdio.h>
int fac(int n);
int main (){
    printf("enter the number : \n");
    int n;
    scanf("%d",&n);
    printf("sum of number is ; %d\n",fac(n) );
}
int fac( int n){
    if(n==1){
        return 1;
    }
    int facNm;
    facNm=fac(n-1);
    int facN=facNm*n;
    return facN;
}