#include <stdio.h>
#include <stdlib.h>
#define MAX 3
#define LENGTH 10
void string_cpy(char arr1[MAX][LENGTH],char arr2[MAX][LENGTH]);
int main(void)
{
    char arr1[MAX][LENGTH]={"Tom","Lily","James Lee"};
    char arr2[MAX][LENGTH];
    string_cpy(arr1,arr2);
    int i,j;
    for(i=0;i<MAX;i++){
        for(j=0;arr2[i][j]!='\0';j++){
           printf("%c",arr2[i][j]);
        }
        putchar('\n');
    }
    return 0;
}
void string_cpy(char arr1[][LENGTH],char arr2[][LENGTH]){
    int i,j;
    for(i=0;i<MAX;i++){
        for(j=0;j<LENGTH;j++){
            arr2[i][j]=arr1[i][j];
        }
    }
}

