/**
 * @file C6-2.c
 * @author dakkk
 * @brief 
 * @version 0.1
 * @date 2024-12-12
 */

#include <stdio.h>

void increment(int *a){
    a++;
}

int main() {
    int i = 10;
    printf("i = %d \n",i);
    increment(&i);
    printf("i = %d \n",i);
    return 0;
}
