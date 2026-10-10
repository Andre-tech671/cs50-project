#include <stdio.h>
#include <string.h>

int main(){
    // char greeting[] = "Hello, World!";
    // printf("%s\n", greeting);
    // return 0;

    //string concantenation
    char str1[20] = "Hello, ";
    char str2[] = "World!";
    strcat(str1, str2);
    printf("%s\n", str1);

    //string length
    char str3[] = "Hello, World!";  
    return 0;
}