// if else for age check 
#include<stdio.h>
int main(){
    int age;
    printf (" enter age");
    scanf( "%d" ,&age);
    if (age>18){
        printf("adult \n");
        printf("they can vote \n");
        printf("they can drive \n");

    }
    else{
        printf("the can not vote \n");
    }
    return 0;
}