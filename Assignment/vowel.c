// To Check the letter is vowel or consonent
#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
  // declaring the character variable
  char ch;
  printf("Enter the Chareacter :");
  // taking the character input
  scanf("%c", &ch);
  // condition to check weather the inputer is vowel or consonent
  if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
      ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
  {
    printf("the character is vowel");
  }

  else
  {
    printf("the character is consonent ");
  }

  return 0;
}