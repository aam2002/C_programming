#include<stdio.h>
#include<math.h>
int main(){
     int arr[50];
     int n;
     printf("How many number do you want to check ? ");
     scanf("%d", &n);
     for (int i =0 ;i<n; i++){
     printf("Enter the number %d :",i+1 );
     scanf("%d", &arr[i]);
     }
     for (int i = 1;i<n;i++){
       if( arr[0]<arr[i]){
        arr[0]=arr[i];}
     }
     printf ("largest no is %d\n", arr[0]);

     return 0;
 }
