// #include <stdio.h>
// #include <math.h>
// #include <string.h>
// typedef struct Addresof5people
// {
//     int houseNo;
//     int blockNo;
//     char city[100];
//     char state[100];
// } aop;
// int main()
// {
//     // struct aop;
//     aop P1 = {5, 22, "sitapur ", "chhattisgarh"};
//     aop P2 = {9, 66, "sarojni nagar ", "delhi "};
//     aop P3 = {44, 77, "kota ", "rajisthan"};
//     aop P4 = {47, 8, "ambala ", "haryana "};
//     aop P5 = {44, 77, "bilaspur", "chhattisgarh"};
//     printf("%d", P1.houseNo);
//     printf("%d", P1.blockNo);
//     printf("%s", P1.city);
//     printf("%s", P1.state);
//     printf("\n");
//     printf("%d", P2.houseNo);
//     printf("%d", P2.blockNo);
//     printf("%s", P3.city);
//     printf("%s", P2.state);
//     printf("\n");
//     printf("%d", P3.houseNo);
//     printf("%d", P3.blockNo);
//     printf("%s", P3.city);
//     printf("%s", P3.state);
//     printf("\n");
//     printf("%d", P4.houseNo);
//     printf("%d", P4.blockNo);
//     printf("%s", P4.city);
//     printf("%s", P4.state);
//     printf("\n");
//     return 0;
// }
#include<stdio.h>
#include<math.h>
#include<string.h>
 typedef struct address{
    int houseNo;
    int block;
    char city[100];
    char state[100];
}add;
void printadd(struct address add);
int main(){
  struct address add[4];
  printf("Enter info for person 1 :\n");
  scanf("%d", &add[0].houseNo);
  scanf("%d", &add[0].block);
  scanf("%s", add[0].city);
  scanf("%s", add[0].state);
  scanf("%d", &add[1].houseNo);
  scanf("%d", &add[1].block);
  scanf("%s", add[1].city);
  scanf("%s", add[1].state);
  scanf("%d", &add[2].houseNo);
  scanf("%d", &add[2].block);
  scanf("%s", add[2].city);
  scanf("%s", add[2].state);
  scanf("%d", &add[3].houseNo);
  scanf("%d", &add[3].block);
  scanf("%s", add[3].city);
  scanf("%s", add[3].state);
  for (int i = 0; i<=3;i++){
     printadd(add[i]);
  }
     return 0;
 }
 void printadd(struct address add){
    printf("address is : %d , %d , %s , %s \n",add.houseNo,add.block,add.city,add.state);
 }