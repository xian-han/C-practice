#include <stdio.h>
#include <stdlib.h>
int idx(int arr[]);
int main(void)
{
    int a[6]={3,6,2,5,4,1};
    int i;
    for(i=0;i<6;i++){
        printf("%2d",a[i]);
    }
    putchar('\n');
    printf("the index of minimum of a=%2d\n",idx(a));
    return 0;
}
int idx(int arr[]){
    int i,min_index=0,min;
    for(i=0,min=arr[0];i<6;i++){
        if(arr[i]<min){
            min=arr[i];
            min_index=i;
        }
    }
    return min_index+1;
}



