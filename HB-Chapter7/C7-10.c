/**
 * @file C7-10.c
 * @author dakkk
 * @brief 
 * @version 0.1
 * @date 2024-12-20
 */

#include <stdio.h>

#define TOTAL 2

typedef struct {
    char name[20];
    int id;
    char gender;
    char profession;
    union {
       float score;
       char course[20];
    }sc;
}Person;

int main() {
    Person persons[TOTAL];
    // 输入人员信息
    for (int i = 0; i < 2; ++i) {
        printf("Input info:");
        fflush(stdout);
        scanf("%s %d %c %c",persons[i].name,&persons[i].id,&persons[i].gender,&persons[i].profession);
        if(persons[i].profession == 's'){
            printf("请输入学生成绩：");
            fflush(stdout);
            scanf("%f",&persons[i].sc.score);
        }else{
            printf("请输入老师课程：");
            fflush(stdout);
            scanf("%s",persons[i].sc.course);
        }
    }

    // 输出人员信息
    printf("\nName\tid\tgender\tProfession\tScore/Course\n");
    for (int i = 0; i < 2; ++i) {
        if(persons[i].profession == 's'){
            printf("%s\t%d\t%c\t%c\t%f\n",persons[i].name,persons[i].id,
                   persons[i].gender,persons[i].profession,persons[i].sc.score);
        }else{
            printf("%s\t%d\t%c\t%c\t%s\n",persons[i].name,persons[i].id,
                   persons[i].gender,persons[i].profession,persons[i].sc.course);
        }
    }
    return 0;
}
