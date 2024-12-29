/**
 * @file C7-4.c
 * @author dakkk
 * @brief 
 * @version 0.1
 * @date 2024-12-20
 */

#include <stdio.h>
#include <string.h>

typedef struct {
    char name[10];
    int age;
    double weight;
}Dog;

//char *say(Dog dog){
//    static char info[100];
//    sprintf(info,"name:%s, age:%d, weight:%.2lf",dog.name,dog.age,dog.weight);
//    return info;
//}

char *say(Dog *dog){
    static char info[100];
    sprintf(info,"name:%s, age:%d, weight:%.2lf",(*dog).name,(*dog).age,(*dog).weight);
    return info;
}

int main() {
    Dog dog;
    strcpy(dog.name,"大黄");
    dog.age = 11;
    dog.weight = 20.33;
    char *res = say(&dog);
    printf("%s", res);
    return 0;
}
