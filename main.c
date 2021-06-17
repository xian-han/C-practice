#include <stdio.h>
#include <stdlib.h>
#define COL 3
#define ROW 2
double average(int arr[ROW][COL]);
int main(void)
{
    int a[ROW][COL]={{3,7,8},{4,3,9}};
    int i,j;
    for(i=0;i<ROW;i++){
        for(j=0;j<COL;j++){
            printf("%2d",a[i][j]);
        }
        putchar('\n');
    }
    printf("the average of a=%3.2lf\n",average(a));
    return 0;
}
double average(int arr[ROW][COL]){
    int i,j;
    float sum=0;
    for(i=0;i<ROW;i++){
        for(j=0;j<COL;j++){
            sum+=arr[i][j];
        }
    }
    return sum/(ROW*COL);
}



