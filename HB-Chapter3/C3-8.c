/**
 * @file C3-8.c
 * @author dakkk
 * @brief 
 * @version 0.1
 * @date 2024-10-21
 */
#include <stdio.h>
#define ROWS 3
#define COLS 4
int main() {
    int arr[ROWS][COLS] = {{1,   2,  3,  4},
                         {9,   8,  7,  6},
                         {-10, 10, -5, 2}};
    int row = 0;
    int col = 0;
    int max = 0;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            if(max<arr[i][j]){
                max = arr[i][j];
                row = i;
                col = j;
            }
        }
    }
    printf("max = %d , row = %d , col = %d ",max,row,col);
    return 0;
}