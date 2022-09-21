//  syntax break in for/while/do_while loop  
#include<stdio.h>
int main (){
    for( int i=1; i<=40 ; i++ ){
        if(i==39){
            break;
        }
        printf(" %d\n",i);
    }
    printf("End \n");
    return 0;    

}