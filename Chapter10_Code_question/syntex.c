#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
//How to open close read write a file 
     FILE *fptr;/*"FILE is the variable name"*/
     fptr=fopen/*to open the file */("hello.txt"/*filename*/ ,"r"/*mode*/);
 //How to read from a file 
     char ch;
     fscanf(fptr,"%c",&ch);
     printf("character = %c\n",ch);
     fscanf(fptr,"%c",&ch);
     printf("character = %c\n",ch);
     fscanf(fptr,"%c",&ch);
     printf("character = %c\n",ch);
     fscanf(fptr,"%c",&ch);
     printf("character = %c\n",ch);
     fscanf(fptr,"%c",&ch);
     printf("character = %c\n",ch);
     fscanf(fptr,"%c",&ch);
     printf("character = %c\n",ch);
     fscanf(fptr,"%c",&ch);
     printf("character = %c\n",ch);
     fclose(fptr);/*to close the file */
     return 0;
 }