/**
 * @file P2-1.c
 * @author dakkk
 * @brief 
 * @version 0.1
 * @date 2024/8/14
 */
#include <stdio.h>
int main(void){
    char fn[10];
    char ln[10];
    printf("Enter your first name and last name:");
    fflush(stdout);
    scanf("%s %s",fn,ln);
    printf("Hello %s,%s",ln,fn);
    return 0;
}