#include<stdio.h>

int main(){
int n;
printf("Enter the number");
scanf("%d",&n);
for ( int i=1; i<=n; i++){
    if(i==3){
        continue;
    }
    printf("%d\n" , i);
}
}