/**
 * @file C3-7.c
 * @author dakkk
 * @brief 
 * @version 0.1
 * @date 2024-10-21
 */
#include <stdio.h>
#define ROWS 3
#define COLS 4
int main() {
    int arr[ROWS][COLS] = {{3, 5, 8},{12, 9},{7, 0, 6, 4}};
    int sum = 0;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            sum += arr[i][j];
        }
    }
    printf("sum = %d",sum);
    return 0;
}