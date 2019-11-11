#define _CRT_SECURE_NO_WARNINGS
#define N 3
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student
{
    int num;
    char name[20];
    float score[3];
    float aver;
};
int main()
{
    /*
用结构体变量和结构体变量的指着作为函数参数
输出平均成绩最高的学生信息
*/

    void inputdata(struct Student stu[]);
    struct Student *maxdata(struct Student stu[]);
    void printdata(struct Student * p);
    struct Student stu[N];
    struct Student *p;
    p = stu;

    inputdata(stu);

    printdata(maxdata(p));

    system("pause");
    return 0;
}
void inputdata(struct Student stu[])
{

    int i;
    printf("please input student info\n");
    for (int i = 0; i < N; i++)
    { //输入成绩
        scanf("%d %s %f %f %f", &stu[i].num, stu[i].name, &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
        stu[i].aver = (stu[i].score[0] + stu[i].score[1] + stu[i].score[2]) / 3;
    }
}

struct Student *maxdata(struct Student stu[])
{
    struct Student *p;
    int i, m = 0;
    for (int i = 0; i < N; i++)
    {
        //计算平均值
        if (stu[i].aver > stu[m].aver)
            m = i;
        p = &stu[m];
    }
    return p;
}

void printdata(struct Student *p)
{

    printf("max is %d %s %f\n", p->num, p->name, p->aver);
}