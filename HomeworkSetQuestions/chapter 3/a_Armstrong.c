// TO CHECK THE GIVEN NUMBER IS ARMSTRONG NO.
#include <stdio.h>
int main()
{
    int num, originalNum, remainder, remainder2, remainder3, nextno, nextno2, result1, result2, resultfinnal;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    originalNum = num;
    remainder = originalNum % 10;
    result1 = remainder * remainder * remainder;
    nextno = originalNum / 10;
    remainder2 = nextno % 10;
    result2 = result1 + remainder2 * remainder2 * remainder2;
    nextno2 = nextno / 10;
    remainder3 = nextno2;
    resultfinnal = result2 + remainder3 * remainder3 * remainder3;
    if (resultfinnal == num)
    {
        printf("%d is an Armstrong number.", num);
    }
    else
    {
        printf("%d is not an Armstrong number.", num);
    }
    return 0;
}

// #include <math.h>
// #include <stdio.h>

// int main() {
//    int num, originalNum, remainder, n = 0;
//    float result = 0.0;

//    printf("Enter an integer: ");
//    scanf("%d", &num);

//    originalNum = num;

//    // store the number of digits of num in n
//    for (originalNum = num; originalNum != 0; ++n) {
//        originalNum /= 10;
//    }

//    for (originalNum = num; originalNum != 0; originalNum /= 10) {
//        remainder = originalNum % 10;

//       // store the sum of the power of individual digits in result
//       result += pow(remainder, n);
//    }

//    // if num is equal to result, the number is an Armstrong number
//    if ((int)result == num)
//     printf("%d is an Armstrong number.", num);
//    else
//     printf("%d is not an Armstrong number.", num);
//    return 0;
// }
// while (originalNum != 0) {
//    // remainder contains the last digit
//     remainder = originalNum % 10;

//    result += remainder * remainder * remainder;

//    // removing last digit from the orignal number
//    originalNum /= 10;
// }