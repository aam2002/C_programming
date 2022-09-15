#include<stdio.h>
int alpha(char *A);
int main (){
    char A;
    printf("The english alphabet are ");
    alpha(&A);
}
int alpha(char *A){
    for (char i='A';i<='Z';i++){
       printf("%c ", i);
    
    }
    return 0;
}