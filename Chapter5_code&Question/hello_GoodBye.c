// to print the two function of hello and good bye
#include<stdio.h>
void printhello();
void printgoodbye();
int main(){
    printhello();
    printf("how are you ? \n");
    printgoodbye();
    return 0;
}
void printhello(){
    printf("Hello \n");
}
void printgoodbye()
{
    printf("Have a nice day \nGood bye \n");
}