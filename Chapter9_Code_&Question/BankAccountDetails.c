#include<stdio.h>
#include<math.h>
#include<string.h>
typedef struct bankaccount{
    char name[100];
    int AccNO;
}ba;
int main(){
  
    ba p1 = {"Aman soni", 516574};
    printf("Name = %s\nAccount No = %d\n",p1.name,p1.AccNO);   
     return 0;
 }