/**
 * @file C8-2.c
 * @author dakkk
 * @brief 
 * @version 0.1
 * @date 2024-12-29
 */

#include <stdio.h>
#include <time.h>

void test() {
    int sum = 0;
    for (int i = 0; i < 10000000; ++i) {
        sum = 0;
        for (int j = 0; j < 100; ++j) {
            sum += j;
        }
    }
}

int main() {
    printf("程序启动...\n");
    time_t start_t;
    // 先得到执行test前的时间
    time(&start_t); // 获取当前时间

    test();

    time_t end_t;
    // 在得到执行test后的时间
    time(&end_t);

    double diff_t; // 存放时间差
    diff_t = difftime(end_t,start_t); //时间差，按秒 ent_t - start_t

    printf("%d\n",start_t);
    printf("%d\n",end_t);
    printf("执行test()函数 好用了%.2lf 秒\n",diff_t);

    char * startTimeStr = ctime(&start_t);
    printf("%s\n",startTimeStr);

    return 0;
}
