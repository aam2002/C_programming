#include<stdio.h>
int main(){
    int num , sum=0;
    do
    {
      printf("Enter the number\n");
      scanf("%d", &num);
      if(num<0){
        break;
      }
      sum=sum+num;
    }
    while (1);printf("%d\n",sum);
    return 0;
    
}