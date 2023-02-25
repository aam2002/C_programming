// #include <stdio.h>
// #include <math.h>
// #include <string.h>
// int binary(int num);
// void printarr(int arr[], int n);
// void reverse(int arr[], int n);
// int main()
// {
//     int num;
//     printf("Enter the number :");
//     scanf("%d", &num);
//     binary(num);
//     return 0;
// }
// int binary(int num)
// {
//     int arr[32];
//     for (int i = 0; num != 0; i++)
//     {
//         arr[i] = num % 2;
//         num = num / 2;
//     }
//     int n = sizeof(arr[32]);
//     printarr(arr, n);
// reverse(arr, n);
//     return 0;
// }
// void reverse(int arr[], int n)
// {
//     for (int i = 0; i <n/2-1; i++)
//     {
//         int first = arr[i];
//         int second = arr[n - i - 1];
//         arr[i] = second;
//         arr[n - i - i] = first;
//     }
// }
// void printarr(int arr[], int n)
// {
    
//     for (int i = 0; i < n - 1; i++)
//     {
//         printf("%d \t", arr[i]);
//     }
//     printf("\n");
// }
 #include<stdio.h>
int main()
{

int k, binary = 0, place = 1 ;
printf("\nEnter no");
scanf("\n%d",&k);
while(k>0)
{
   binary = binary +(k%2) * place;
   k = k/2;
   place = place * 10;/* code */
}
printf("\nBinary number =%d",binary);
return 0;
}