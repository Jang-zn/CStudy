#include "stdio.h"

int main(){
    int arr[]={1,2,3,4,5};
    int * ptr = arr;
    for(int i=0;i<5;i++){
        *(ptr+i)+=2;
    }
    for(int i=0;i<5;i++){
        printf("arr[%d] = %d\n", i,*(ptr+i));
    }
    return 0;
}