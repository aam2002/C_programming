#include<stdio.h>
int array_count(int array[], int n);
int main(){
int array[]={1 ,2 , 3, 4, 5, 6};
printf("The number of odd = ");
array_count(array,5);
return 0;
}
int array_count(int array[] , int n ){
    int count = 0;
    for(int i=0; i<=n ; i++){
        if (array[i] %2 !=0){
            count++;
        }
    }
        printf("%d \n", count);
    return 0;
}