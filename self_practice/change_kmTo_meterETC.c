/* the distance between two cities (in kilometers) is input through the
keybord. Write a program to convert and print this distance in meters,
feet, inches and centimeters.*/
#include <stdio.h>
#include <math.h>
#include <string.h>
float meters(float *k);
float feet(float *k);
float inches(float *k);
float centimeters(float *k);
int main()
{
    float k;

    printf("Enter the distance in kilometer : ");

    scanf("%f", &k);

    printf("The lentgth in merter will be %fm \n", meters(&k));

    printf("The lentgth in feet will be %fft \n", feet(&k));

    printf("The lentgth in inches will be %fin \n", inches(&k));

    printf("The lentgth in centimeter will be %fcm\n", centimeters(&k));

    return 0;
}
float meters(float *k)
{
    float c = 0.00;
    c = ((*k) * 1000.0);
    return c;
}
float feet(float *k)
{
     float c = 0.00;
     c = ((*k) * 3280.84);
    return c;
}
float inches(float *k)
{
     float c = 0.00;
     c = ((*k) * 39370.1);
    return c;
}
float centimeters(float *k)
{
     float c = 0.00;
     c = ((*k) * 100000.0);
    return c;
}