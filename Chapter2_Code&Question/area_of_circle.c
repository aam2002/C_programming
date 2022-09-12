// To print the area of the circl
#include<stdio.h>

int main(){
    float radius;
    float pi = 3.14 ;
    printf("Enter the radius ");
    scanf( "%f" ,&radius);
    printf("Area of circle is : %f \n" , pi*radius*radius);
    return 0;
}