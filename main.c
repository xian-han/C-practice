#include <stdio.h>
#include <stdlib.h>
void square(int arr[]);
int main(void)
{
    int a[6]={3,6,2,5,4,1};
    int i;
    for(i=0;i<6;i++){
        printf("%3d",a[i]);
    }
    putchar('\n');
    square(a);
    //printf("the index of minimum of a=%2d\n",idx(a));
    return 0;
}
void square(int arr[]){
    int i;
    printf("---after square()---\n");
    for(i=0;i<6;i++){
        arr[i]*=arr[i];
        printf("%3d",arr[i]);
    }
    putchar('\n');
}



