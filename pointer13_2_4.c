#include "stdio.h"

int main(){
    int arr[]={1,2,3,4,5,6};
    int * ptr1 = arr;
    int * ptr2 = &arr[5];

    for(int i=0;i<3;i++){
        int temp = *(ptr1+i);
        *(ptr1+i) = *(ptr2-i);
        *(ptr2-i) = temp;
    }
    for(int i=0;i<6;i++){
        printf("arr[%d] = %d\n", i,*(ptr1+i));
    }
    return 0;
}