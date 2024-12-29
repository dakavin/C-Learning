/**
 * @file C7-9.c
 * @author dakkk
 * @brief 
 * @version 0.1
 * @date 2024-12-20
 */

#include <stdio.h>
#include <malloc.h>
#include <string.h>

typedef struct {
    int id;
    char name[20];
    struct StudentNode *next;
} StudentNode;

int main() {
    // 生成一个三个节点的列表 {1001,"Tom"} -> {1002,"Jerry"} -> {1003,"Lily"}
    StudentNode *head;
    head = (StudentNode *) malloc(sizeof(StudentNode));
    head->id = 1001;
    strcpy(head->name, "Tom");

    StudentNode *n1;
    n1 = (StudentNode *) malloc(sizeof(StudentNode));
    n1->id = 1002;
    strcpy(n1->name, "Jerry");

    head->next = n1;

    StudentNode *n2;
    n2 = (StudentNode *) malloc(sizeof(StudentNode));
    n2->id = 1003;
    strcpy(n2->name, "Lily");

    n1->next = n2;

    // 遍历3个节点
    StudentNode *cur;
    for (cur = head; cur != NULL; cur = cur->next) {
        printf("id:%d, name:%s\n", cur->id, cur->name);
    }
    return 0;
}
