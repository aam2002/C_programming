#include <stdio.h>

int main(){
	int n; 
	printf("Enter the no. ");
	scanf("%d", &n);
	for (int i=1;i<=n;i++){
		int fac;
		fac=i*n;
        printf("%d \t",fac);
	}
    return 0;
}