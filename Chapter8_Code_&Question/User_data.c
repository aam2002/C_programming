#include <stdio.h>
#include <math.h>
void array( char ar[]);
int main()
{
    // printf("Enter your name :");
    char firstname[]="AMAN";
    char Secondname[]="SONI";
    array(firstname);
    printf("\n");
    array(Secondname);
    return 0;
}
void array(char ar[]){
    for(int i=0;ar[i]!='\0';i++){
        printf("%c \t",ar[i]);
    }
}
   