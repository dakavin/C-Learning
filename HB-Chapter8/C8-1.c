/**
 * @file C8-1.c
 * @author dakkk
 * @brief 
 * @version 0.1
 * @date 2024-12-29
 */

#include <stdio.h>
#include <string.h>

int main() {
    // strcpy() test
    /*char str1[10] = "abcde1234",str2[]="China";
    strcpy(str1,str2);
    printf("%s\n",str1);

    for (int i = 0; i < 10; ++i) {
        printf("%c",str1[i]);
    }
    printf("\n");*/

    // strncpy() test
    /*char s1[40]= "1234567890";
    char s2[12]= "helloworld";
    strncpy(s1,s2,5);
    s1[5] = '\0';
    printf("str1 = %s , str2 = %s",s1,s2);*/

    // strcat() test
    char s1[30]= "People′s Republic of ";
    char s2[] = "China";
    printf("%s\n", strcat(s1,s2));
    printf("%s\n", s1);
    return 0;
}
