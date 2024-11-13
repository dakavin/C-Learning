/**
 * @file C4-7.c
 * @author dakkk
 * @brief 
 * @version 0.1
 * @date 2024-10-22
 */

#include <stdio.h>

#define ROWS 3
#define COLS 4

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p = arr;
    printf("%d\n", p[1]); //
    p[1] = 50;
    printf("%d\n", p[1]); //50
    printf("%d\n", arr[1]); //5
    //
    int num = 30;
    p = &num;
    printf("%d\n",*p); //30
    printf("%d\n",p[0]); //30
    printf("%d\n",arr[0]); //1
    return 0;
}
