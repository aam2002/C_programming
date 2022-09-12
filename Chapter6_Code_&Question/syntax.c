//the syntax of pointer
#include<stdio.h>
int main(){
    int age = 20;
    int *ptr = &age;// *ptr is the declaration of pointers/* we can also do with char , float ,int
    int _age= *ptr;
    printf("%d" , _age);
    return 0;
}
    // format specifier
    // printf("%p" ,&age);
    // printf("%p" , ptr);
    // printf("%p", &ptr);
    // by %f,%c,%d=>%u we can convert the for of the address of the pointe
    