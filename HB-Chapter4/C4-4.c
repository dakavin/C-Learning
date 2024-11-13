/**
 * @file C4-4.c
 * @author dakkk
 * @brief 
 * @version 0.1
 * @date 2024-10-22
 */
#include <stdio.h>

int main(){
    int a = 10;
    int *pa = &a;
    printf("%d\n",*pa);

    pa = NULL;

    printf("%d\n",pa);

    return 0;
}
