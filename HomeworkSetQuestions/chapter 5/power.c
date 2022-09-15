#include<stdio.h>
int power(int n , int x);
int main (){
    int n ,x;
    printf("enter the number : \n");
    scanf("%d",&n);
    printf("enter the power : \n");
    scanf("%d",&x);
    printf("power of number is : %d\n",power(n,x) );
    return 0;
}
int power( int n , int x){
    if(x==0){
        return 1;
    }
    int xofn;
    xofn=power(n,x-1)*n;
    // int xMofn=xofn*n;
    return xofn;
}
 