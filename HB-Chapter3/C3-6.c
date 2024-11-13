/**
 * @file C3-6.c
 * @author dakkk
 * @brief 
 * @version 0.1
 * @date 2024-10-21
 */
#include <stdio.h>

int main(){
    int arr[3][4];

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf("&arr[%d][%d] = %p \n",i,j,&arr[i][j]);
        }
    }

    return 0;
}