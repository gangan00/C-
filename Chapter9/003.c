#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    /*
指向结构体数组的指针
按照成绩的高低顺序输出各学生的信息
*/
    struct Student
    {
        int num;
        char name[20];
        float source;
    };
    //struct Student stu[5] = {{10, "lili", 79}, {23, "asd", 98}, {123, "casd", 90}, {12, "zxczxc", 87}, {32, "nnwef", 96}};
    struct Student stu[5] = {10, "lili", 79, 23, "asd", 98, 123, "casd", 90, 12, "zxczxc", 87, 32, "nnwef", 96};
    struct Student *p;
    p = stu;
    for (; p < stu + 5; p++)
    {

        printf("%6d %8s %6.2f", p->num, p->name, p->source);
        printf("\n");
    }
    system("pause");
    return 0;
}