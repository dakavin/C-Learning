/**
 * @file C6-5.c
 * @author dakkk
 * @brief 
 * @version 0.1
 * @date 2024-12-12
 */

#include <stdio.h>

int digitalCount(char *p) {
    int num = 0;
    for (; *p != '\0'; p++) {
        if (*p >= '0' && *p <= '9') {
            num++;
        }
    }
    return num;
}

int main() {
    char *str = "a12bc43hec22b68o";
    printf("数字字符的个数为 % d个\n", digitalCount(str));
    return 0;
}
