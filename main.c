#include <stdio.h>
#include <stdlib.h>
int min(int arr[]);
int main(void)
{
    int a[6]={3,6,2,5,4,1};
    int i;
    for(i=0;i<6;i++){
        printf("%2d",a[i]);
    }
    putchar('\n');
    printf("the minimum of a=%2d\n",min(a));
    return 0;
}
int min(int arr[]){
    int i,min;
    for(i=0,min=arr[0];i<6;i++){
        if(arr[i]<min)
            min=arr[i];
    }
    return min;
}



