// to print the table of a given number
#include<stdio.h>
int main(){
    int n;
    int product=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    for (int i = 1; i<=10;i++){
        product=i*n;
        printf("%d * %d = %d\n" ,n,i, product);
}
return 0;
    }

