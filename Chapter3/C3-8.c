/**
 * @file C3-8.c
 * @author dakkk
 * @brief 
 * @version 0.1
 * @date 2024/8/8
 */
/* escape.c -- 使用转义序列 */
#include <stdio.h>

int main(void) {
    float salary;

    printf("\aEnter your desired monthly salary:\n");    /* 1 */
    printf(" $_______\b\b\b\b\b\b\b");                 /* 2 */
    fflush(stdout);
    scanf("%f", &salary);
    printf("\n\t$%.2f a month is $%.2f a year.", salary,salary * 12.0);                           /* 3 */
    printf("\rGee!\n");                                /* 4 */

    return 0;
}