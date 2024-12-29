/**
 * @file C4-4.c
 * @author dakkk
 * @brief 
 * @version 0.1
 * @date 2024-10-22
 */
#include <stdio.h>

int main(){
    int a[4][3] = {{10, 20, 30},
            {40, 50, 60},
            {70, 80, 90},
            {100, 110, 120}};

    int *p = a;

    printf("%d\n",p[2*3+1]);

    return 0;
}
