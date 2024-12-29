/**
 * @file C6-9.c
 * @author dakkk
 * @brief 
 * @version 0.1
 * @date 2024-12-12
 */

#include <stdio.h>

int max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    int (*max_ptr)(int,int);
    max_ptr = &max;
    printf("max = %d",max_ptr(10,20));
    return 0;
}
