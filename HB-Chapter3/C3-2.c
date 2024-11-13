/**
 * @file C3-2.c
 * @author dakkk
 * @brief 
 * @version 0.1
 * @date 2024-10-21
 */
#include <stdio.h>

int main() {
    int arr[10] = {34, 54, 2, 32, 54, 57, 3, 32, 87, 43};
    int max = arr[0];
    int min = arr[0];
    int len = sizeof(arr) / sizeof(int);
    int sum = 0;

    for (int i = 0; i < len; i++) {
        sum += arr[i];
        max = max > arr[i] ? max : arr[i];
        min = min < arr[i] ? min : arr[i];
    }

    int avg = sum / len;

    printf("max = %d , min = %d , sum = %d , avg = %d\n",max,min,sum,avg);

    return 0;
}