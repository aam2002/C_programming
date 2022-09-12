#include <stdio.h>
int main()
{
    int m;
    printf("Enter Marks (0-100) ");
    scanf("%d", &m);
    if (m >= 1 && m <= 33)
    {
        printf(" You are Fail \n");
    }
    else if (m>33 && m<=45)
    {
printf(" You are passed with 3rd division");
    }
    else if (m>45 && m<=60){
        printf("You are passed with 2nd division");
    }
    else if (m>60 && m<=100){
        printf("You are passed with 1st division");
    }
    else {
        printf("You have endered wrong value");
    }
    return 0;
}