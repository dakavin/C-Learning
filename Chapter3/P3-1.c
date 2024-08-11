/**
 * @file P3-1.c
 * @author dakkk
 * @brief 
 * @version 0.1
 * @date 2024/8/8
 */
#include <stdio.h>

int main(void){
    char num;

    printf("Please input a ASCII num:\n");
    fflush(stdout);
    scanf("%d",&num);
    printf("ASCII = %d,char is %c\n",num,num);

    return 0;
}