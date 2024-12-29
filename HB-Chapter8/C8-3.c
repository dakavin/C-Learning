/**
 * @file C8-3.c
 * @author dakkk
 * @brief 
 * @version 0.1
 * @date 2024-12-29
 */

#include <stdio.h>
#include <stdlib.h>

#define NUM 5

typedef struct {
    double score;
} Student;

void test(Student *arr) {
    for (int i = 0; i < NUM; ++i) {
        if (arr[i].score <= 60) {
            printf("%.2lf\n", arr->score);
        }
    }
}

int main() {
    Student *arr;
    arr = (Student *) malloc(NUM * sizeof(Student));
    if (!arr){
        printf("内存分配失败！\n");
        return 1;
    }
    for (int i = 0; i < NUM; ++i) {
        printf("请输入第%d位学生的成绩：", i + 1);
        fflush(stdout);
        scanf("%lf", &arr[i].score);
    }

    test(arr);

    free(arr);
    return 0;
}
