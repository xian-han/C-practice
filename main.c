#include <stdio.h>
#include <stdlib.h>
void reverse(char str[]);
int length(char str[]);
int main(void)
{
    char str[100];
    int i=0;
    gets(str);
    fflush(stdin);
    reverse(str);
    puts(str);
    return 0;
}
void reverse(char str[]){
    int leng,i;
    char tem;
    leng=length(str);
    for(i=0;i<=(leng/2);i++){
        tem=str[i];
        str[i]=str[(leng-1)-i];
        str[(leng-1)-i]=tem;
    }
}
int length(char str[]){
    int leng=0,i=0;
    do{
        leng++;
        i++;
    }while(str[i]!='\0');
    return leng;
}
