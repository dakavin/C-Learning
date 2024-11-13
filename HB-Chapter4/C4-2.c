/**
 * @file C4-2.c
 * @author dakkk
 * @brief 
 * @version 0.1
 * @date 2024-10-22
 */
#include <stdio.h>

int main() {
    int a, b;
    int *p1, *p2, *p;
    printf("请输入两个整数，空格隔开：");
    fflush(stdout);
    printf("\n");
    scanf("%d %d", &a, &b);
    p1 = &a;
    p2 = &b;
    if (a < b) {
        p = p1;
        p1 = p2;
        p2 = p;
    }

    printf("p1 = %d, p2 = %d",*p1,*p2);

    return 0;
}