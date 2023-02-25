#include<stdio.h>
#include<math.h>
#include<string.h>
 struct computerengineeringstudent{
    int roll;
    float cgpa;
    char name [100];
};
int main(){
      struct computerengineeringstudent s1;
     s1.roll=1664;
     s1.cgpa=9.4;
     strcpy(s1.name,"Aman");
     printf("student name is %s \n",s1.name);
     return 0;
 }