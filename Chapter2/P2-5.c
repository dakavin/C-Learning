/**
 * @file P2-5.c
 * @author dakkk
 * @brief 
 * @version 0.1
 * @date 2024/8/5
 */

#include <stdio.h>

void br(void);
void ic(void);

int main(void){
    br();
    printf(",");
    ic();
    printf("\n");
    ic();
    printf("\n");
    br();

    return 0;
}

void br(void){
    printf("Brazil,Russia");
}
void ic(void){
    printf("India,China");
}