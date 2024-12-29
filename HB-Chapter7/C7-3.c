/**
 * @file C7-3.c
 * @author dakkk
 * @brief 
 * @version 0.1
 * @date 2024-12-20
 */

#include <stdio.h>
#include <string.h>
#define N 3
typedef struct {
    char name[20];
    int count;
} Person;

int main() {
    Person leader[N] = {
            {"zhang3",0},
            {"li4",0},
            {"wang5",0}
    };

    char leader_name[20];

    for (int i = 0; i <=10; ++i) {
        printf("你要投票给谁？(zhang3、li4、wang5)：\n");
        fflush(stdout);
        scanf("%s",leader_name);
        for (int j = 0; j < N; ++j) {
            if(strcmp(leader_name,leader[j].name) == 0){
                leader[j].count++;
            }
        }
    }

    printf("\n统计结果:\n");
    for (int i = 0; i < N; ++i) {
        printf("候选人：%-8s,获得选票为：%d\n",leader[i].name,leader[i].count);
    }
    return 0;
}
