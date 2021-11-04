#include "stdio.h"

void swap1(int **, int **);
void swap2(int *, int *);

int main(){
    int a = 100;
    int b = 50;
    int *ap = &a;
    int *bp = &b;
    printf("a:%d / b:%d\n", *ap, *bp);
    printf("\n--------swap2, ap, bp---------\n");
    swap2(ap,bp);
    printf("a:%d / b:%d\n", *ap, *bp);
    printf("----------------------\n");
    printf("\n--------swap2, &ap, &bp---------\n");
    swap2(&ap,&bp);
    printf("a:%d / b:%d\n", *ap, *bp);
    printf("----------------------\n");
    printf("\n--------swap1, &ap, &bp---------\n");
    swap1(&ap,&bp);
    printf("a:%d / b:%d\n", *ap, *bp);
    printf("----------------------\n");

    return 0;
}

void swap1(int ** dp1, int ** dp2){
    int * temp = *dp1;
    *dp1=*dp2;
    *dp2=temp;
}

void swap2(int * sp1, int * sp2){
    printf("sp1 : %x, sp2 : %x\n",sp1, sp2);
    int * temp = sp1;
    sp1 = sp2;
    sp2 = temp;
    printf("sp1 : %x, sp2 : %x\n",sp1, sp2);
}