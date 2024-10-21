/**
 * @file C1-2.c
 * @author dakkk
 * @brief 
 * @version 0.1
 * @date 2024-09-04
 */
#include <stdio.h>
#include <stdint.h>

enum Sex{
    MALE,
    FEMALE,
    SECRET
};

int main(void){
    printf("Hello world!\n");
    printf("%d\n", sizeof(int8_t));
    printf("%d\n", MALE);
    printf("%d\n", FEMALE);
    printf("%d\n", SECRET);
    return 0;
}