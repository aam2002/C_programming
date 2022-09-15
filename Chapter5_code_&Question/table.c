#include<stdio.h>
int n;
void printtable();
int main(){
    int n;
    printf("Enter number : ");
    scanf("%d" , &n);
    printtable( n);//argument/actual parameter
    return 0;
}
void printtable(int n)/* parameter/formal parameter*/{
    for (int i=1;i<=10;i++){
        printf("%d \n",i*n);
    }
}