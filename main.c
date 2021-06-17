#include <stdio.h>
#include <stdlib.h>
#define COL 3
#define ROW 2
void add(int A[ROW][COL],int B[ROW][COL],int C[ROW][COL]);
int main(void)
{
    int a[ROW][COL]={{3,7,8},{4,3,9}},b[][COL]={{1,7,4},{9,10,14}},c[][COL]={0};
    int i,j;
    printf("a:\n");
    for(i=0;i<ROW;i++){
        for(j=0;j<COL;j++){
            printf("%3d",a[i][j]);
        }
        putchar('\n');
    }
    printf("b:\n");
    for(i=0;i<ROW;i++){
        for(j=0;j<COL;j++){
            printf("%3d",b[i][j]);
        }
        putchar('\n');
    }
    add(a,b,c);
    return 0;
}
void add(int A[ROW][COL],int B[ROW][COL],int C[ROW][COL]){
    int i,j;
    printf("---after adding---\n");
    for(i=0;i<ROW;i++){
        for(j=0;j<COL;j++){
            C[i][j]=A[i][j]+B[i][j];
            printf("%3d",C[i][j]);
        }
        putchar('\n');
    }
}



