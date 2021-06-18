#include <stdio.h>
#include <stdlib.h>
int length(char str[]);
int main(void)
{
    char str[100];
    int i=0;
    gets(str);
    fflush(stdin);
    printf("the length of str=%d\n",length(str));
    return 0;
}
int length(char str[]){
    int leng=0,i=0;
    do{
        leng++;
        i++;
    }while(str[i]!='\0');
    return leng;
}
