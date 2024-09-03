/**
 * @file C1-1.c
 * @author dakkk
 * @brief 
 * @version 0.1
 * @date 2024-08-19
 */
#include <stdio.h>
#include <math.h>

int main(void){
    int a = 1;
    int b = 2;
    int c = 3;
    float x1,x2;
    float res;

    res = b*b - 4*a*c;

    if(res>0){
        x1 = (-b-sqrt(res))/(2*a);
        x2 = (-b+sqrt(res))/(2*a);
        printf("x1 = %f , x2 = %f",x1,x2);
    }else if(res ==0){
        x1 = (-b)*(2*a);
        x2 = x1;
        printf("x1 = %f , x2 = %f",x1,x2);
    }else{
        printf("无解");
    }

    return 0;
}