/**
 * @file C7-11.c
 * @author dakkk
 * @brief 
 * @version 0.1
 * @date 2024-12-29
 */

#include <stdio.h>

int add(int a , int b){
    int sum = a + b;
    return sum;
}

char str[3][30] = {"我是你爹呀","www.wsinidie.com","010-12345678"};

typedef int(*PTE_FUNC)(int,int);

typedef char(*PTC_ARR)[30];

int main() {
    // 使用函数指针
    int (*add_ptr)(int,int);
    add_ptr = add;
    int sum = (*add_ptr)(10,20);
    printf("sum = %d\n",sum);

    // 使用数组指针
    char (*arr_ptr)[30];
    arr_ptr = str;
    for (int i = 0; i < 3; ++i) {
        printf("str[%d] = %s \n",i,*(arr_ptr+i));
    }

    // 使用typedef后
    PTE_FUNC add_ptr1 = add;
    int sum1 = add_ptr1(10,20);
    printf("sum = %d\n",sum1);

    PTC_ARR arr_ptr1 = str;
    for (int i = 0; i < 3; ++i) {
        printf("str[%d] = %s \n",i,*(arr_ptr1+i));
    }

    return 0;
}
