/**
 * @file C3-6.c
 * @author dakkk
 * @brief 
 * @version 0.1
 * @date 2024/8/8
 */
#include <stdio.h>

int main(void){
    float aboat = 32000.0;
    double abet = 2.14e9;
    long double dip = 5.32e-5;

    printf("%f can be wirtten %e\n",aboat,aboat);
    printf("And it`s %a in hexadecimal,powers of 2 notation\n",aboat);
    printf("%f can be wirtten %e\n",abet,abet);
    printf("%Lf can be wirtten %Le\n",dip,dip);
    /*
     *  32000.000000 can be wirtten 3.200000e+04
        And it`s 0x1.f4p+14 in hexadecimal,powers of 2 notation
        2140000000.000000 can be wirtten 2.140000e+09
        0.000053 can be wirtten 5.320000e-05
     * */

    float toobig = 3.1415926536;
    printf("%f\n",toobig);

    return 0;
}