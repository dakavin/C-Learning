/**
 * @file C2-1.c
 * @author dakkk
 * @brief 
 * @version 0.1
 * @date 2024-10-20
 */

#include <stdio.h>

int main(void){
    char str[15];
    printf("enter your name:");
    fflush(stdout);
    gets(str);
    printf("your name is ");
    puts(str);
    return 0;
}