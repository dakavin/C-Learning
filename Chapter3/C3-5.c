/**
 * @file C3-5.c
 * @author dakkk
 * @brief 
 * @version 0.1
 * @date 2024/8/8
 */
/* 可移植整数类型名 */
#include <stdio.h>
#include <inttypes.h>

int main(void){
    int32_t me32;
    me32 = 45933945;

    printf("me32 = %d\n",me32);
    printf("me32 = %" PRId32 "\n",me32);

    return 0;
}