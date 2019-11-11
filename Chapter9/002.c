#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    int num;
    char name[20];
    float source;
};

int main()
{
    /*
赋值
通过指向结构体变量的指针访问结构体变量的成员
*/
    struct Student stu;
    struct Student *p;
    p = &stu;
    //赋值
    strcpy(stu.name, "lili");
    stu.num = 9080;
    // 通过指向结构体变量的指针访问结构体变量的成员
    printf("num:%6d\n", (*p).num);
    printf("name:%s\n", (*p).name);
    // 也可以这样写
    printf("num:%6d\n", p->num);
    printf("name:%s\n", p->name);

    system("pause");
    return 0;
}