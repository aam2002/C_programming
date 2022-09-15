#include<stdio.h>
#include<math.h>
int arrcount(char name[]);
int main(){
     char name[100];
     printf("Ente you name ");
     fgets(name,100,stdin);
     printf("The number of input character is "),arrcount(name) ;
     return 0;
 }
int arrcount(char name []){
    int count=0;
    for (int i=0; name[i]!='\0';i++){
    count++;}
    printf("%d",count-1);
    return  0;
}
