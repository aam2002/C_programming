#include<stdio.h>
int  caltemp(int temp);
int main(){
    int temp;
    printf("Enter the temprature  in celsius : ");
    scanf("%d" , &temp);
    caltemp(temp);
}
int caltemp(int temp){
    if (temp>=35 && temp<=55){
        printf("The temprature is too high \n It's hot  \n");
    }
    else if ( temp>=25 && temp<35){
        printf("The temprature is good \n It's like heaven \n");
    }
    else if (temp >= 19 && temp<25){
       printf("the temprature is slight on the cooler side  \n");
    }
    else if( temp<19 && temp>=0){
        printf("the temprature is low \n");
    }
    else {
        printf("you are not in this planet \n");
    }
    return 0;
}
