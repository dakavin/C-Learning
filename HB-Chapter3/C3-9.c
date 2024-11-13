/**
 * @file C3-9.c
 * @author dakkk
 * @brief 
 * @version 0.1
 * @date 2024-10-21
 */
#include <stdio.h>
#define ROWS 2
#define COLS 3
int main() {
    int a[ROWS][COLS] = {{1, 2, 3},
                         {4, 5, 6}};
    int b[COLS][ROWS] = {0};
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            b[j][i] = a[i][j];
        }
    }
    for (int i = 0; i < COLS; ++i) {
        for (int j = 0; j < ROWS; ++j) {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}