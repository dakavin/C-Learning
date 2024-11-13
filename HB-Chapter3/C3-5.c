/**
 * @file C3-5.c
 * @author dakkk
 * @brief 
 * @version 0.1
 * @date 2024-10-21
 */

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int len = sizeof(arr) / sizeof(int);
    int right = 0;
    int left = len - 1;

    while (right < left) {
        int temp = arr[right];
        arr[right] = arr[left];
        arr[left] = temp;
        right++;
        left--;
    }

    for (int i = 0; i < len; ++i) {
        printf("%d ",arr[i]);
    }

    char str1[]={"China\nBeijing"};
    char str2[] = "helloworld";

    puts(str1);

    puts(str2);

    return 0;
}

#include <stdio.h>

