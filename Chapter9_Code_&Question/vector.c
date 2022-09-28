#include<stdio.h>
#include<math.h>
#include<string.h>
struct vector {
     int x;
     int y;

};
void vectorsum( struct vector v1,struct vector v2 , struct vector sum );
int main(){
     struct vector v1 = {35,140};
     struct vector v2 = {3435, 745};
     struct vector sum = {0};
     vectorsum(v1,v2,sum);
     return 0;
 }
void vectorsum(struct vector v1,struct vector v2 , struct vector sum ){
    struct vector ;
    sum.x=v1.x+v2.x;
    sum.y=v1.y+v2.y;
    printf("Sum of x components is : %d\n", sum.x);
    printf("Sum of y components is : %d\n", sum.y);
}