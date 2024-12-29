/**
 * @file C7-6.c
 * @author dakkk
 * @brief 
 * @version 0.1
 * @date 2024-12-20
 */

#include <stdio.h>

typedef struct {
    int data[100];
    int num;
}S;

S s = {{1,2,3,4},100};

void p1(S s){
    printf("%d\n",s.num);
}

void p2(S *s){
    printf("%d\n",(*s).num);
}

int main() {
    p1(s);  // 传了结构体，及其变量，都压入了栈
    p2(&s); // 性能开销更低，因为只传了结构体的地址
    return 0;
}
