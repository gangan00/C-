#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    /*
结构体数组
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
    struct Student temp;

    for (int i = 0; i < (5 - 1); i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (stu[i].source < stu[j].source)
            {

                temp = stu[j];
                stu[j] = stu[i];
                stu[i] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {

        printf("%6d %8s %6.2f", stu[i].num, stu[i].name, stu[i].source);
        printf("\n");
    }
    system("pause");
    return 0;
}