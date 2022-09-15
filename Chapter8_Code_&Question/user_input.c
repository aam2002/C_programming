#include<stdio.h>
#include<math.h>
int main(){
     char firstname[50];
     char secondname[50];
     printf("Enter Your First name "), scanf("%s", firstname);
     printf("Enter Your last name "),scanf("%s", secondname);
     printf("Your name is %s %s", firstname,secondname);
     return 0;
 }
 // Scanf can not take an Input of multiword so we use fget(str) , and for Output we use put(str)