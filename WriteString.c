#include <stdio.h>

int main(){
    char * str = "Simple String";

    printf("1.puts test===========\n");
    puts(str);
    puts("Success");
    printf("2.fputs test===========\n");
    fputs(str,stdout);
    printf("\n");
    fputs("success",stdout);
    printf("\n");
    return 0;

}