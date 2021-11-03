#include "stdio.h"

int main(){
    char ch = 9;
    int inum=1000;
    double d = 3.1415;
    printf("char size : %d byte\n", sizeof(char));
    printf("short size : %d byte\n", sizeof(short));
    printf("int size : %d byte\n", sizeof(int));
    printf("long size : %d byte\n", sizeof(long));
    printf("long long size : %d byte\n", sizeof(long long));
    printf("float size : %d byte\n", sizeof(float));
    printf("double size : %d byte\n", sizeof(double));
    printf("long double size : %d byte\n", sizeof(long double));
    printf("ch size : %d byte\n", sizeof(ch));
    printf("inum size : %d byte\n", sizeof(inum));
    printf("d size : %d byte\n", sizeof(d));

    return 0;
}