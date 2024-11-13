/**
 * @file C4-6.c
 * @author dakkk
 * @brief 
 * @version 0.1
 * @date 2024-10-22
 */

#include <stdio.h>
#define NUM 5

int main() {
    int a[NUM];
    int *p = a;

    //printf("请输入%d个整数：",NUM);
    //fflush(stdout);
    //for (int i = 0; i < NUM; ++i) {
    //    scanf("%d",p+i);
    //}
    //
    //for (int i = 0; i < NUM; ++i) {
    //    //printf("%d ",a[i]);
    //    printf("%d ",*(p+i));
    //}

    printf("\n");
    printf("%zd",sizeof(int *));
    return 0;
}
