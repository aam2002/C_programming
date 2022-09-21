// using for loops print 1 2 3 4 5 6 . . . . . . . 100 
#include<stdio.h>
int main(){
    // i ko iteratorka counter bolte hai
    for(int i = 1; i<=100 ; i+=1){ // we can also write a shorthand of i+=1 -> i++
        printf("%d " , i);

    }
    return 0;
}