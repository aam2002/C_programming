//C program to read and print information of a book using structure.
#include<stdio.h>
//Adding string library.
#include<string.h>
//Defining the size of the structure.
#define SIZE 20
//making book structure.
struct bookdetail
{
          char book_name[20];
          char author_name[20];
          int ISBN_code;
          int price;
 
};

void output(struct bookdetail v[],int n);
//main function :- asking user for book details 
int main()
{
          struct bookdetail b[SIZE];
 
          int num,i;
          printf("Enter the Numbers of Books: ");
          scanf("%d",&num);
          printf("\n");
          for(i=0;i<num;i++)
 
          {
 
                   printf("\nEnter the Book Name: ");
                   scanf("%s",b[i].book_name);
 
                   printf("Enter the Author Name of Book: ");
                   scanf("%s",b[i].author_name);
 
                   printf("Enter the ISBN code of Book: ");
                   scanf("%d",&b[i].ISBN_code);
 
                   printf("Enter the Price of Book: ");
                   scanf("%d",&b[i].price);
 
          }
 
          output(b,num);
 return 0;
}
//printing the output.
void output(struct bookdetail v[],int n)
 
{
 
          int i,t=1;
 
          for(i=0;i<n;i++,t++)
 
          {
 
                   printf("\n");
 
                   printf("Book No.%d\n",t);
 
                   printf("Book Name : %s \n",v[i].book_name);
 
                   printf("Author Name : %s \n",v[i].author_name);
 
                   printf("ISBN code : %d \n",v[i].ISBN_code);
 
                   printf("Price : %d \n",v[i].price);
 
                   printf("\n");
 
          }
 
}