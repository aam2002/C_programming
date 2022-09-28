#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
    //user defined variable
     struct student{
       char name [100];
       int roll;
       float cgpa;
     }; 
     int main() {
        struct student s1;// declaration
        s1.roll=154654;// declaration
        s1.cgpa = 9.2;// declaration
        strcpy(s1.name , "Aman");
        printf("student name = %s\n",s1.name);//calling the variable
        printf("student roll no. = %d\n",s1.roll);//calling the variable
        printf("student cgpa  = %f\n",s1.cgpa);//calling the variable

     return 0;
     }
     //typedef keyword
    //  typedef struct syntaxOfStructure
    //  {
    //   float cgpa;
    //   char name[10];
    //    int roll ;

    //  } sos;
     