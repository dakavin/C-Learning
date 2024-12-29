/**
 * @file C6-11.c
 * @author dakkk
 * @brief 
 * @version 0.1
 * @date 2024-12-17
 */

#include <stdio.h>
const int A = 10;
const int B = 20;

int getBig(int a,int b){
    return a>b?a:b;
}

int getSmall(int a,int b){
    return a>b?b:a;
}

int getSum(int a,int b){
    return a+b;
}

int getRes(int (*f)(int,int)){
    int res;
    res = f(A,B);
    printf("%d\n", res); //输出结果
    return f(A,B);
}

int main() {
    int input,res;
    printf("请输入1(最大值)/2(最小值)/3(和): \n");
    fflush(stdout);
    scanf("%d",&input);
    switch (input) {
        case 1:
            res = getRes(getBig);
            break;
        case 2:
            res = getRes(getSmall);
            break;
        case 3:
            res = getRes(getSum);
            break;
    }
    printf("结果为：%d",res);
    return 0;
}
