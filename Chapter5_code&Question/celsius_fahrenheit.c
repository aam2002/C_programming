#include <stdio.h>
float t;
int temp(float tem);
int main()
{
    printf("enter the temptature in celcius \n");
    scanf("%f", &t);
    temp(t);
    return 0;
}
int temp(float tem)
{
  
    printf("your temparature in fahrenheit is : %f \n",  tem * (1.8) + 32);
    return 0;
}