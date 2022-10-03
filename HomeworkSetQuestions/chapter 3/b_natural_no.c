#include<stdio.h>
int main(){
    int n;
    printf("enter the number");
    scanf("%d", &n);
    if (n>=1){
        printf("%d is natural number" , n);
    }
    else{
        printf("%d is not a natural number" , n);
    }
    return 0;
}