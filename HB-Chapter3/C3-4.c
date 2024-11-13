/**
 * @file C3-4.c
 * @author dakkk
 * @brief 
 * @version 0.1
 * @date 2024-10-21
 */

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int len = sizeof(arr) / sizeof(int);

    for (int i = 0; i < len / 2; ++i) {
        int temp = arr[i];
        arr[i] = arr[len - i - 1];
        arr[len - i - 1] = temp;
    }

    for (int i = 0; i < len; ++i) {
        printf("%d ",arr[i]);
    }

    return 0;
}
