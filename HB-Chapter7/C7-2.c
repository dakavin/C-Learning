/**
 * @file C7-2.c
 * @author dakkk
 * @brief 
 * @version 0.1
 * @date 2024-12-20
 */

#include <stdio.h>

#define N 4
#define MAX_NAME_LENGTH 20

typedef struct {
    int id;
    char name[MAX_NAME_LENGTH];
    char gender;
    int score;
} Student;

int main() {
    Student stus[N];
    int sum = 0;
    for (int i = 0; i < N; ++i) {
        printf("\"请输入学生信息 (ID, 姓名, 性别, 成绩): \n");
        fflush(stdout);
        scanf("%d %19s %c %d",&stus[i].id,stus[i].name,&stus[i].gender,&stus[i].score);
        sum += stus[i].score;
    }

    double avg = sum / N;
    printf("平均成绩为：%.2lf\n",avg);
    printf("高于平均分的学生：\n");
    for (int i = 0; i < N; ++i) {
        if(stus[i].score>avg){
            printf("%-20s:%d\n",stus[i].name,stus[i].score);
        }
    }

    return 0;
}
