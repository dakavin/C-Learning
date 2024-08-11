/**
 * @file C3-3.c
 * @author dakkk
 * @brief 
 * @version 0.1
 * @date 2024/8/6
 */
#include <stdio.h>
int main(void){
    int x = 100;

    printf("dec = %d; octal = %o; hex = %x\n",x,x,x);
    printf("dec = %d; octal = %#o; hex = %#x\n",x,x,x);

    return 0;
}