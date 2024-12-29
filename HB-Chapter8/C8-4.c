/**
 * @file C8-4.c
 * @author dakkk
 * @brief 
 * @version 0.1
 * @date 2024-12-29
 */

#include <stdio.h>
#include <stdlib.h>

void getMemory(int *p) {
    p = (int *) malloc(sizeof(int)); // 在这里修改的是局部指针 p，不会影响 main 函数中的原始指针 ptr
    //....
}
int main() {
    int *ptr;
    getMemory(ptr);
    printf("pte = %d\n",*ptr);
    free(ptr);
    return 0;
}
