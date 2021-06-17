#include <stdio.h>
#include <stdlib.h>
void count(int arr[]);
int main(void)
{
    int a[6]={3,6,2,5,4,1};
    int i;
    for(i=0;i<6;i++){
        printf("%3d",a[i]);
    }
    putchar('\n');
    count(a);
    return 0;
}
void count(int arr[]){
    int i,odd_num=0,odd[6]={0},even_num=0,even[6]={0};
    for(i=0;i<6;i++){
        if(arr[i]%2==0){
            even[even_num]=arr[i];
            even_num++;
        }
        else{
            odd[odd_num]=arr[i];
            odd_num++;
        }
    }
    i=0;
    printf("odd are:");
    do{
        printf("%2d",odd[i]);
        i++;
    }while(odd[i]!=0);
    printf("\n the number of odd are %2d\n",odd_num);
    i=0;
    printf("even are:");
    do{
        printf("%2d",even[i]);
        i++;
    }while(even[i]!=0);
    printf("\n the number of even are %2d\n",even_num);
}



