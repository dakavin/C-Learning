/**
 * @file P2-4.c
 * @author dakkk
 * @brief 
 * @version 0.1
 * @date 2024/8/5
 */

#include <stdio.h>

void jolly(void);
void deny(void);

int main(void){
    jolly();
    jolly();
    jolly();
    deny();

    return 0;
}

void jolly(void){
    printf("For he`s a jolly good fellow!\n");
}

void deny(void){
    printf("Which nobody can deny!\n");
}