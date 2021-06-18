#include <stdio.h>
#include <stdlib.h>
void toLower(char str[]);
int length(char str[]);
int main(void)
{
    char str[100];
    gets(str);
    fflush(stdin);
    toLower(str);
    puts(str);
    return 0;
}
void toLower(char str[]){
    int i=0,leng=length(str);
    do{
        if(str[i]>='A'&&str[i]<='Z'){
            str[i]+=32;
        }
        i++;
    }while(i<leng);
}
int length(char str[]){
    int leng=0,i=0;
    do{
        leng++;
        i++;
    }while(str[i]!='\0');
    return leng;
}
