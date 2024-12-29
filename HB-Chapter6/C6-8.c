/**
 * @file C6-8.c
 * @author dakkk
 * @brief 
 * @version 0.1
 * @date 2024-12-12
 */

#include <stdio.h>
#include <string.h>

char *maxLlen(char **pString, int n) {
    int position = 0;
    int max = strlen(pString[0]);

    for (int i = 1; i < n; ++i) {
        if (max < strlen(pString[i])) {
            max = strlen(pString[i]);
            position = i;
        }
    }

    return pString[position];
}

int main() {
    char *pString[5] = {"Atlanta1996", "Sydney2000", "Beijing2008", "London2012", "RIO2016"};

    printf("maxLenStringis %s", maxLlen(pString, 5));

    return 0;
}
