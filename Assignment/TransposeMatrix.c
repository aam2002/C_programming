// TO PRINT THE TRANSPOSE OF A GIVEN MATRIX 
#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
   int r, c;
   printf("Enter the numbers of rows in Matrix :");
   scanf("%d", &r);
   printf("Enter the numbers of columns in Matrix :");
   scanf("%d", &c);
   printf("Enter the element of matrix R x C \n");
   int ar[r][c];
   int a, b;
   for (int a = 0; a < r; a++)
   {
      for (int b = 0; b < c; b++)
      {
         printf("Enter Element of Matrix ar[%d][%d] : ", a, b);
         scanf("%d", &ar[a][b]);
      }
   }
   printf("The matrix that you have entered : \n");
   for (int a = 0; a < r; a++)
   {
      for (int b = 0; b < c; b++)
      {
         printf("  %d ", ar[a][b]);
         if (b == (c)-1)
         {
            printf("\n");
         }
      }
   }
   printf("Transpose of matrix is : \n");
   int g=a;
   a=b;
   b=g;
   for (int a = 0; a < c; a++)
   {
      for (int b = 0; b < r; b++)
      {
         printf("  %d ", ar[b][a]);
       if (b == (r)-1)
         {
            printf("\n");
         }
        
      }
   }
   return 0;

}