/**
 * @file C7-8.c
 * @author dakkk
 * @brief 
 * @version 0.1
 * @date 2024-12-20
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int data;
    struct LNode *next;
}LNode;

typedef struct {
    int data;
    struct BTNode *lchild;
    struct BTNode *rchild;
}BTNode;

int main() {
    BTNode b1;
    BTNode *b2;
    b2 = (BTNode*)malloc(sizeof(BTNode));
    return 0;
}
