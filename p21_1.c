#include <stdio.h>

int main(){
    printf("알파벳 입력");
    int ch = getchar();
    if(97<=ch&&ch<=122){
        putchar(ch-32);
    }else if(65<=ch&&ch<=90){
        putchar(ch+32);
    }else{
        printf("잘못된 입력");
    }
    return 0;
}