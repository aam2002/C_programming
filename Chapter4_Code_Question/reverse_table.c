// to print the table of a given number in reverse order
#include<stdio.h>
int main(){
    int n;
    int product;
    printf("Enter the number : ");
    scanf("%d",&n);
    for (int i=10; i<=10 && i>=1;i--){
        product=i*n;
        printf("%d * %d = %d\n" ,n,i, product);
}
return 0;
    }
