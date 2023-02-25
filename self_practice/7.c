  #include<stdio.h>
int main()
{
    int a,b,rev=0;
    printf("\nEnter number ");
    scanf("%d",&a);
    b=a;
    while(a>0)
    {
     rev=(rev*10)+a%10;
      a=a/10;

    }
 
    if(rev==b)
    {
    printf("\n It is Palindrome number");
    }
    else
    {
      printf("\n It is not Palindrome number");
    }
  return 0;
}  