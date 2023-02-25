#include<stdio.h>
void reverse(int arr[], int n);
void printarr( int arr[], int n);
int main (){
    int arr[]= { 1 ,2, 3, 4,5};
    printf("Input array was : " );
    printarr(arr , 5);
    reverse(arr , 5);
    printf("Output array is : " );
    printarr( arr , 5);
    return 0;  
}
void reverse(int arr[], int n){
    for (int i=0;i<n/2-1;i++){
        int first = arr[i];
        int second= arr[n-i-1];
        arr[i]=second;
        arr[n-i-i]=first;
    }
}
void printarr( int arr[], int n){
    for (int i=0;i<n;i++){
        printf("%d \t", arr[i]);
    }
    printf("\n");

}
