#include "stdio.h"

int main(){
    int num;
    printf("insert number : ");
    scanf("%d",&num);
    int result = ~(num-1);
    printf("result : %d",result);
    return 0;
}