/**
 * @file C6-4.c
 * @author dakkk
 * @brief 
 * @version 0.1
 * @date 2024-12-12
 */

#include <stdio.h>

void reverse(int *p, int n) {
    int left = 0;
    int right = n - 1;
    while (left <= right) {
        int temp = p[left];
        p[left] = p[right];
        p[right] = temp;
        left++;
        right--;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    reverse(arr, sizeof(arr) / sizeof(int));
    for (int i = 0; i < sizeof(arr) / sizeof(int); ++i) {
        printf("%d ",arr[i]);
    }
    return 0;
}
