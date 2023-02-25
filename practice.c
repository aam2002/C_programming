// #include <stdio.h>
// #include <math.h>
// #include <string.h>
// int main()
// {
//     int hindi, english;
//     printf("Enter the marks of subject one and two \n");
//     scanf("%d%d", &hindi, &english);

//     //  printf("Enter the marks of subject two", scanf("%d",&mofsub2));
//     if (hindi > 33 && english > 33)
//     {
//         printf("congo you passed the exam ab agle saal fir se yahape admission lena tum 2 lakh bharna ham 2000 ka sikhayenge aur tumhara chutiya katenge ");
//     }
//     else if (hindi > 33 || english > 33)
//     {
//         printf("congo you passed the exam ");
//     }
//     else
//     {
//         printf("you failed the exam");
//     }
//     return 0;
// }
#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    char input, input1;
    printf("ENTER 'Y' FOR YES AND 'N' FOR NO IN THE PROGRAME\nDid you mannaged to pass both subjects?");
    scanf("%c", &input);
    if (input == 'y')
    {
        printf("congo you have won the first price of 2000");
    }
    if (input == 'n')
    {
        printf("Did you passed any of the subject hindi/english ?");
        scanf("%c",&input1);
        if (input1 == 'y')
        {
            printf("you are just passed");
        }
        else
        {
            printf("you are failed ");
        }
    }

    return 0;
}