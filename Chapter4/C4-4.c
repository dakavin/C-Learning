/**
 * @file C4-4.c
 * @author dakkk
 * @brief 
 * @version 0.1
 * @date 2024/8/9
 */
/* stringf.c -- 字符串格式 */
#include <stdio.h>
#define BLURB "Authentic imitation!"
int main(void)
{
    printf("[%2s]\n", BLURB);
    printf("[%24s]\n", BLURB);
    printf("[%24.5s]\n", BLURB);
    printf("[%-24.5s]\n", BLURB);

    return 0;
}