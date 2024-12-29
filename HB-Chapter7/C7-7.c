/**
 * @file C7-7.c
 * @author dakkk
 * @brief 
 * @version 0.1
 * @date 2024-12-20
 */

#include <stdio.h>
#include <string.h>

typedef struct {
    char name[20];
    int age;
    int price;
} Visitor;

void ticket(Visitor *v) {
    if ((*v).age >= 18) {
        (*v).price = 20;
    }else{
        (*v).price = 0;
    }
}

int main() {
    Visitor v;
    while (1) {
        printf("请输入姓名(输入n退出程序)：\n");
        fflush(stdout);
        scanf("%s",v.name);
        if(!strcmp("n",v.name)){
            break;
        }
        printf("请输入年龄：\n");
        fflush(stdout);
        scanf("%d",&v.age);
        ticket(&v);

        printf("姓名：%s， 收费：%d\n",v.name,v.price);
    }
    return 0;
}
