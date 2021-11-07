#include <stdio.h>
#include <string.h>

int main(){
    char str1[30] = "First blood";
    char str2[30] = "Second blood";

    char str3[30] = "Simple number : ";
    char str4[30] = "1234567890";

    //case 1
    strcat(str1,str2);
    puts(str1);

    //case 2
    strncat(str3, str4, 7);
    puts(str3);

    return 0;



}
