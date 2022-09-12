#include<stdio.h>
int main(){
    char input;
    printf("enter the single character: ");
    scanf("%c" , &input);
    if (input>='A' && input<='Z'){
        printf("%c is upper case \n " , input);
    }
    else if (input>='a' && input<='z')    {
        printf("%c is lower case \n ", input);
    }
    else {
        printf("input is not valid \n");
    }
    return 0;
}