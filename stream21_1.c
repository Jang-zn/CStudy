#include <stdio.h>

int main(){
    int ch1, ch2;
    ch1 = getchar();//문자입력
    ch2 = fgetc(stdin);//엔터

    putchar(ch1);//문자출력
    fputc(ch2, stdout);//엔터
    return 0;
}
