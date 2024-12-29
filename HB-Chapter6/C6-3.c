/**
 * @file C6-3.c
 * @author dakkk
 * @brief 
 * @version 0.1
 * @date 2024-12-12
 */

#include <stdio.h>

int pMax(int *p, int n) {
    int max = 0;
    for (int i = 0; i < n; ++i) {
        max = max > *(p + i) ? max : *(p + i);
    }
    return max;
}

int main() {
    int arr[] = {1, 2, 3, 400, 5, 6, 7, 8, 9};
    int max = pMax(arr, sizeof(arr) / sizeof(int));
    printf("max = %d \n", max);
    return 0;
}
