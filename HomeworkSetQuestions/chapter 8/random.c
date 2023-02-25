#include <stdio.h>
#include <string.h>
int maxc(char ch[]);

int main()
{
    char str[100];
    printf("Enter a string \n");
    fgets(str, 100, stdin);
    maxc(str);
    return 0;
}
int maxc(char ch[])
{
    int i, j;
    int count = 0;
    int maxcount = 0;
    char maxchar;
    for(int i=0; ch[i]!='\0'; i++){
        count = 0;
        for(int j=0; ch[j]!='\0'; j++){
            if(ch[i] == ch[j]){
                count++;
            }
        }
        if(maxcount<count){
            maxcount = count;
            maxchar = ch[i];
         }
    }
    printf("%c occurs %d times, and is the highest.", maxchar, count);
    return 0 ; 
}

