/**
 * @file C6-6.c
 * @author dakkk
 * @brief 
 * @version 0.1
 * @date 2024-12-12
 */

#include <stdio.h>
#include <string.h>

void stringSort(char **p,int n){
    char *temp;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - 1 - i; ++j) {
            if(strcmp(*(p+j),*(p+j+1))>0){
                temp = *(p+j);
                *(p+j) = *(p+j+1);
                *(p+j+1) = temp;
            }
        }
    }
}

void stringPrint(char **p,int n){
    for (int i = 0; i < n; ++i) {
        printf("\"%s\" ",*(p+i));
    }
}

int main() {
    char *days[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    stringPrint(days, 7);
    printf("\n");
    stringSort(days, 7);
    stringPrint(days, 7);

    return 0;
}
