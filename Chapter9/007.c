#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
储存学生和老师的信息 仅有一项数据之差
*/
struct
{ //声明无名结构体类型
    int num;
    char name[10];
    char sex;
    char job;
    union Category {
        int clas;          //对学生来说班级
        char position[10]; //对老师来说是职务
    } category;            //初始化共用体变量

} person[2];
int main()
{
    for (int i = 0; i < 2; i++)
    {
        printf("please enter the data of person:\n");
        scanf("%d %s %c %c", &person[i].num, &person[i].name, &person[i].sex, &person[i].job);
        if (person[i].job == 's')
            //如果是学生输入班级
            scanf("%d", &person[i].category.clas);
        else if (person[i].job == 't')
            //如果是老师输入职务
            scanf("%s", &person[i].category.position);
        else
            printf("error\n");
    }
    for (int i = 0; i < 2; i++)
    //输出信息
    {
        printf("%-6d %s %c %c\n", person[i].num, person[i].name, person[i].sex, person[i].job);
        // -6d:占六列左对齐
        if (person[i].job == 's')
            //如果是学生输入班级
            printf("%d\n", person[i].category.clas);
        else if (person[i].job == 't')
            //如果是老师输入职务
            printf("%s\n", person[i].category.position);
        else
            printf("error\n");
    }
    system("pause");
    return 0;
}