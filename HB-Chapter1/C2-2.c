/**
 * @file C2-2.c
 * @author dakkk
 * @brief 
 * @version 0.1
 * @date 2024-10-20
 */
#include <stdio.h>

int global = 2023;

int main() {
    int flower;
    for (int i = 100; i <=999 ; i++) {
        int a = i / 100;
        int b = i / 10 % 10;
        int c = i % 10;
        int max = a*a*a + b*b*b + c*c*c;
        if(max == i){
            printf("%d\n",max);
        }
    }
    return 0;
}