/**
 * @file C6-7.c
 * @author dakkk
 * @brief 
 * @version 0.1
 * @date 2024-12-12
 */

#include <stdio.h>

int getSum(int i){
    if(i == 1){
        return 1;
    }else{
        return i + getSum(i - 1);
    }
}

int getPlus(int i){
    if(i == 1 || i == 0){
        return 1;
    }else{
        return i * getPlus(i - 1);
    }
}

int main() {
    printf("sum = %d \n", getSum(3));
    printf("sum = %d \n", getPlus(5));
    return 0;
}
