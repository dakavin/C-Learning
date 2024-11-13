/**
 * @file C4-3.c
 * @author dakkk
 * @brief 
 * @version 0.1
 * @date 2024-10-22
 */
#include <stdio.h>
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *p1 = &arr[0];
    int *p2 = &arr[3];
    printf("p1的地址为：%d\n", p1); //497022544  这里地址写的是十进制！
    printf("p2的地址为：%d\n", p2); //497022556
    printf("p2-p1=%d\n", p2 - p1); //3 等同于 (497022556 - 497022544)/4 ==> 3  相差3个元
    return 0;
}
