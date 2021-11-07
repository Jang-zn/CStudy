#include <stdio.h>

int main(){
    int ch;
    while(1){
        ch=getchar();
        if(ch==EOF){
            putchar("-1");
            break;
        }
        putchar(ch);
    }
    return 0;
}