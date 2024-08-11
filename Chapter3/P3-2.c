/**
 * @file P3-2.c
 * @author dakkk
 * @brief 
 * @version 0.1
 * @date 2024/8/8
 */
#include <stdio.h>

int main(void){

    float num;

    printf("Enter a floating-point value:");
    fflush(stdout);
    scanf("%f",&num);
    printf("fixed-point notation: %f\n",num);
    printf("exponential notation: %e\n",num);

    return 0;
}