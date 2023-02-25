#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
     char string[500],string2[500];
     int n , m; 
     printf("enter the string :\n");
     fgets(string,500,stdin);
     printf("Enter starting point :\n");
     scanf("%d",&n);
     printf("Enter ending point :\n");
     scanf("%d",&m);
     int l = strlen(string);
     if(n<m&&n<l&&m<l){
        for(int i=n-1,j=0;i<=m-1;i++,j++){
            string2[j]=string[i];
        }
        printf(" the reduced string is :%s",string2);
     }
     else{
        printf("Sorry we cannot reduce your string");
     }
     return 0;
 }