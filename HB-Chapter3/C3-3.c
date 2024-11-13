/**
 * @file C3-3.c
 * @author dakkk
 * @brief 
 * @version 0.1
 * @date 2024-10-21
 */
#include <stdio.h>

int main() {
    int arr[10] = {5, 4, 6, 8, 9, 0, 1, 2, 7, 3};
    int max = arr[0];
    int min = arr[0];
    int len = sizeof(arr) / sizeof(int);
    int sum = 0;

    for (int i = 0; i < len; i++) {
        sum += arr[i];
        max = max > arr[i] ? max : arr[i];
        min = min < arr[i] ? min : arr[i];
    }

    double avg = (double)(sum - max - min) / (len - 2);

    printf("avg = %.2f\n", avg);

    return 0;
}