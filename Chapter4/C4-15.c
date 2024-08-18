/**
 * @file C4-15.c
 * @author dakkk
 * @brief 
 * @version 0.1
 * @date 2024/8/13
 */
// 何时使用 &
#include <stdio.h>
int main(void){
    int age;
    float assets;
    char pet[30];

    printf("Enter your age,assets,and favorite pet.\n");
    fflush(stdout);
    scanf("%d %f",&age,&assets);
    scanf("%s",pet);
    printf("%d $%.2f %s\n",age,assets,pet);

    return 0;
}
