/**
 * @file P2-1.c
 * @author dakkk
 * @brief 
 * @version 0.1
 * @date 2024/8/14
 */
#include <stdio.h>
#include <string.h>
int main(void){
    float f;
    printf("Enter a float:");
    fflush(stdout);
    scanf("%f",&f);
    printf("The input is %.1f or %.1e.\n",f,f);
    printf("The input is %+6.3f or %.3E.\n",f,f);

    return 0;
}