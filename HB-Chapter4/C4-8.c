/**
 * @file C4-8.c
 * @author dakkk
 * @brief 
 * @version 0.1
 * @date 2024-10-22
 */

#include <stdio.h>

int main() {
    //char arr[][13] = {"三国演义", "西游记", "红楼梦", "水浒传"};
    //int len = 4;
    //for (int i = 0; i < len; ++i) {
    //    printf("books[%d]:%s\n",i,arr[i]);
    //}

    char *arr[4] = {"三国演义", "西游记", "红楼梦", "水浒传"};
    int len = 4;
    for (int i = 0; i < len; ++i) {
        printf("books[%d]:%s\n",i,arr[i]);
    }
    return 0;
}
