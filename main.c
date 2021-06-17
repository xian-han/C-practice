#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float table[3][4]={{18.2,17.3,15.0,13.4},{23.8,25.1,20.6,17.8},{20.6,21.5,18.4,15.7}};
    int i,j;
    //印出陣列內容
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%5.1f",table[i][j]);
        }
        putchar('\n');
    }
    printf("------------------\n");

    //每日平均溫度
    float avr_temp[4]={0},total_temp;
    for(j=0;j<4;j++){
            for(total_temp=0,i=0;i<3;i++){
                total_temp+=table[i][j];
            }
            avr_temp[j]=(total_temp/3);
            printf("%5.1f\n",avr_temp[j]);

    }
    printf("------------------\n");

    //時段一、時段二與時段三的平均氣溫
    float dayavr_temp[3]={0},day_temp;
    for(i=0;i<3;i++){
        for(day_temp=0,j=0;j<4;j++){
            day_temp+=table[i][j];
        }
        dayavr_temp[i]=(day_temp/3);
        printf("%5.1f\n",dayavr_temp[i]);
    }
    printf("------------------\n");

    //溫度最高的日子與時段
    int time,day;
    float hotest_time=dayavr_temp[0],hotest_day=avr_temp[0];
    for(time=1,i=0;i<3;i++){
        if(dayavr_temp[i]>hotest_time){
            hotest_time=dayavr_temp[i];
            time=i+1;
        }
    }
    printf("the hotest time is %d\n",time);
    for(day=1,j=0;j<4;j++){
        if(avr_temp[j]>hotest_day){
            hotest_day=avr_temp[j];
            day=j+1;
        }
    }
    printf("the hotest day is %d\n",day);
    printf("------------------\n");
    //溫度最低的日子與時段
    int time2,day2;
    float coldest_time=dayavr_temp[0],coldest_day=avr_temp[0];
    for(time2=1,i=0;i<3;i++){
        if(dayavr_temp[i]<coldest_time){
            coldest_time=dayavr_temp[i];
            time2=i+1;
        }
    }
    printf("the coldest time=%d\n",time2);
    for(day2=1,j=0;j<4;j++){
        if(avr_temp[j]<coldest_day){
            coldest_day=avr_temp[j];
            day2=j+1;
        }
    }
    printf("the coldest day=%d\n",day2);

    return 0;

}
