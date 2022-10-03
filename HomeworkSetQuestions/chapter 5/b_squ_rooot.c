#include<stdio.h>
#include<math.h>
int main (){
    int n;
    printf("Enter the number " );
    scanf("%d" , &n);
   printf("square root of the number is %f ",sqrt(n));
   return 0;
}



// ALSO WE CAN DO THIS SAME QUESTION IN ANOTHER WAY 

#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
     int n ;
     printf("Enter the number : ");
     scanf("%d", &n);
     for(int i =1;i<=n;i++){
        if(n==i*i){
            printf("The square root of %d is %d \n",n,i);
        }
     }
     return 0;
 }