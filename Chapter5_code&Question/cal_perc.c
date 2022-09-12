#include <stdio.h>
int calperc(int maths, int sans, int scie);
int main()
{
    int maths, sans, scie;
    printf("enter the marks of maths   sanskrit    science \n");
    scanf("%d%d%d", &maths, &sans, &scie);
    calperc(maths, sans, scie);
}
int calperc(int maths, int sans, int scie)
{
    printf("%d%% \n", (maths + sans + scie)/ 3 );
    return 0;
}