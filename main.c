#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char str[100];
    int i=0;
    scanf("%s",&str);
    fflush(stdin);
    do{
        if(str[i]>='A'&&str[i]<='Z'){
            str[i]+=32;
        }
        i++;
    }while(str[i]!='\0');
    printf("%s\n",str);
    return 0;
}
