/**
 * @file P2-1.c
 * @author dakkk
 * @brief 
 * @version 0.1
 * @date 2024/8/14
 */
#include <stdio.h>
#include <string.h>
int main(void){
    char name[10];
    printf("Enter your name:");
    fflush(stdout);
    scanf("%s",name);
    printf("\"%s\"\n",name);
    printf("%20s\n",name);
    printf("%-20s\n",name);
    printf("%*s\n",(int)strlen(name)+3,name);
    return 0;
}