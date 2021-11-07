#include<stdio.h>
#include<string.h>

void removeBsn(char str[]){
    int length = strlen(str);
    str[length-1]=0;
}

int main(){
    char str[100];
    printf("문자열 입력 : ");
    fgets(str, sizeof(str), stdin);
    printf("길이 : %d, 내용 : %s\n", strlen(str), str);

    removeBsn(str);
    printf("길이 : %d, 내용 : %s\n", strlen(str), str);
    printf("-----");
    return 0;
}