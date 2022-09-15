#include<stdio.h>
void calculateprice(float value);
int main(){
float value;
printf("Enter face price : ");
scanf("%f",&value);
calculateprice(value);
return 0;
}
void calculateprice(float value){
    value +=(0.05*value);
    printf("final price is : %f \n", value);
}