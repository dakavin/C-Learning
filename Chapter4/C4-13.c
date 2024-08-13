/**
 * @file C4-13.c
 * @author dakkk
 * @brief 
 * @version 0.1
 * @date 2024/8/11
 */
#include <stdio.h>

int main(void){
    int bph2o = 212;
    int rv;

    rv = printf("%d F is water`s boiling point.\n",bph2o);
    printf("The printf() function printed %d characters.\n",rv);

    return 0;
}