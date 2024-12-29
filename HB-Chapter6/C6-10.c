/**
 * @file C6-10.c
 * @author dakkk
 * @brief 
 * @version 0.1
 * @date 2024-12-17
 */

#include <stdio.h>
#include <stdlib.h>

void initArray(int *arr,int arrLen,int (*f)()){
    for (int i = 0; i < arrLen; ++i) {
        arr[i] = f();
    }
}

int getRandNum(){
    return rand();
}

int main() {
    int arrLen = 10;
    int arr[arrLen];
    initArray(arr,arrLen,getRandNum);

    for (int i = 0; i < arrLen; ++i) {
        printf("%d ",arr[i]);
    }
    return 0;
}
