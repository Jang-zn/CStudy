#include <stdio.h>

void p1();
void p2();
void q1();
void q1_1();

int main() {
    p1();
    q1();
    q1_1();
    return 0;
}

void p1(){
    printf("È«±æµ¿\n È« ±æ µ¿\n È«  ±æ  µ¿\n");
    printf("------------------\n");
}

void q1(){
    int n1;
    int n2;
    n1=1;
    n2=2;
    printf("%d %d\n", n1, n2);
    printf("------------------\n");
}

void q1_1(){
    int n1;
    n1=1;
    int n2;
    n2=2;
    printf("%d %d\n", n1, n2);
    printf("------------------\n");
}