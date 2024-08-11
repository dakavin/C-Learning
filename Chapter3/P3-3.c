/**
 * @file P3-3.c
 * @author dakkk
 * @brief 
 * @version 0.1
 * @date 2024/8/8
 */
#include <stdio.h>

int main(void){

    long double num;

    printf("Enter your age:");
    fflush(stdout);
    scanf("%lf",&num);
    printf("your spend second is %e\n",num*3.156e7);

    return 0;
}