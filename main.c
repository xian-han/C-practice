#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int pixel[][4][5]={
                        {{247,67,32,187,240},{122,41,21,16,154},{52,35,79,21,93},{27,22,35,154,75}},
                        {{14,145,132,25,40},{212,221,121,54,14},{132,235,178,19,14},{122,122,133,52,47}},
                        {{17,44,32,127,240},{22,231,21,156,124},{32,35,78,21,194},{127,22,33,54,45}}
                      };
    int i,j,k;
    for(i=0;i<3;i++){
        if(i==0){
            printf("red:\n");
            for(j=0;j<4;j++){
                for(k=0;k<5;k++){
                    pixel[i][j][k]+=30;
                    if(pixel[i][j][k]>255)
                        pixel[i][j][k]=255;
                    printf("%5d",pixel[i][j][k]);
                }
            }
            putchar('\n');
        }
        else if(i==1){
            printf("green:\n");
            for(j=0;j<4;j++){
                for(k=0;k<5;k++){
                    pixel[i][j][k]-=30;
                    if(pixel[i][j][k]<0)
                        pixel[i][j][k]=0;
                    printf("%5d",pixel[i][j][k]);
                }
            }
            putchar('\n');
        }
    }
    return 0;
}




