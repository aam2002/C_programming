// sum of number using the recursion 
#include<stdio.h>
int sum(int n);
int main (){
     int n;
    printf("enter the number : \n");
    scanf("%d",&n);
    printf("sum of number is : %d\n",sum(n) );
    return 0;
}
int sum( int n){
    if(n==1){
        return 1;
    }
    int sumNm;
    sumNm=sum(n-1);
    int sumN=sumNm+n;
    return sumN;
}
