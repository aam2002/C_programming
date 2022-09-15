#include <stdio.h>
#include <math.h>
#include <string.h>
int salted(char userinput[], char addition[]);
int main(){
     char userinput[100];
     char addition [] ="123";
     printf("Enter Your Name : "),fgets(userinput,100,stdin);
     salted(userinput,addition);
     return 0;
 }
 int salted (char userinput[],char addition[]){
    strcat(userinput,addition);
    printf("Your Password is : "),puts(userinput);

    return 0;
 }
// int salted(char userinput[]);
// int main()
// {
//     char userinput[100];
//     printf("Enter Your Name : "); 
//     scanf("%s",userinput);
//     salted(userinput);
//     return 0;
// }
// int salted (char userinput[]){
//     char salt[] = "123";
//     char newpasword[200];
//     stpcpy(newpasword,userinput);
//     strcat(newpasword,salt);
//     printf("Your Password is : "), puts(newpasword);
// return 0 ;
// }
