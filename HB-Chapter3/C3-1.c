/**
 * @file C3-1.c
 * @author dakkk
 * @brief 
 * @version 0.1
 * @date 2024-10-21
 */
#include <stdio.h>

int main(void) {
    int arr[10];

    for (int i = 0; i < 10; i++) {
        arr[i] = i;
    }

    for (int i = 0; i < sizeof(arr)/ sizeof(int); ++i) {
        printf("arr[%d] = %d\n",i,arr[i]);
    }

    return 0;
}