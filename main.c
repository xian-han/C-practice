#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char str[100];
    int time[5]={0},i=0,n=0;
    scanf("%s",&str);
    fflush(stdin);
    do{
        switch(str[i]){
        case('a'):
            time[0]++;
            break;
        case('e'):
            time[1]++;
            break;
        case('i'):
            time[2]++;
            break;
        case('o'):
            time[3]++;
            break;
        case('u'):
            time[4]++;
            break;
        default:
            break;
        }
        i++;
    }while(str[i]!='\0');
    i=0;
    do{
        switch(i){
        case(0):
            printf("a:%d\n",time[0]);
            break;
        case(1):
            printf("e:%d\n",time[1]);
            break;
        case(2):
            printf("i:%d\n",time[2]);
            break;
        case(3):
            printf("o:%d\n",time[3]);
            break;
        case(4):
            printf("u:%d\n",time[4]);
            break;
        default:
            break;
        }
        i++;
    }while(i<5);
    return 0;
}
