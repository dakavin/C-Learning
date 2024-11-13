/**
 * @file C4-5.c
 * @author dakkk
 * @brief 
 * @version 0.1
 * @date 2024-10-22
 */

#include <stdio.h>
#include <malloc.h>

int main() {
    int rows, cols;
    printf("第一维为：");
    fflush(stdout);
    scanf("%d", &rows);
    printf("第二维为：");
    fflush(stdout);
    scanf("%d", &cols);

    int **arr = (int **) malloc(sizeof(int *) * rows);

    for (int i = 0; i < rows; ++i) {
        arr[i] = (int *) malloc(sizeof(int) * cols);
        for (int j = 0; j < cols; ++j) {
            arr[i][j] = 1;
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    free(arr);
    return 0;
}
