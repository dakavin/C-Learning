/**
 * @file C7-1.c
 * @author dakkk
 * @brief 
 * @version 0.1
 * @date 2024-12-20
 */

#include <stdio.h>

typedef struct {
    double length;
    double width;
    double height;
} Box;

double getVolume(Box box) {
    return box.length * box.height * box.width;
}

int main() {
    Box box;
    printf("输入长度：");
    fflush(stdout);
    scanf("%lf", &box.length);

    printf("输入宽度：");
    fflush(stdout);
    scanf("%lf", &box.width);

    printf("输入高度：");
    fflush(stdout);
    scanf("%lf", &box.height);

    printf("体积为：%2lf \n", getVolume(box));
    return 0;
}
