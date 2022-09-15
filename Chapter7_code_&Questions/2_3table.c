#include<stdio.h>
int storetable(int arr[][10], int m , int n , int number);
int main(){
    int table[2][10];
    storetable(table , 0,10,2);
    storetable(table , 1,10,3);
   for (int i=0 ; i<10 ; i++){
    printf("%d\t\n", table[0][i]);
   }
     for (int i=0 ; i<10;i++){
         printf("%d\t\n", table[1][i]);
     }
     return 0;
}
int storetable(int arr [][10], int m , int n , int number){
    for (int i=0;i<n;i++){
        arr[m][i]=number*(i+1);
    }
    return 0;
}