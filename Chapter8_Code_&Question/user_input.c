#include<stdio.h>
#include<math.h>
int main(){
     char firststring[50];
     char secondstring[50];
     printf("first string "), scanf("%s", firststring);
     printf("second string "),scanf("%s", secondstring);
     printf("Your name is %s %s", firststring,secondstring);
     return 0;
 }
 // Scanf can not take an Input of multiword so we use fget(str) , and for Output we use put(str)