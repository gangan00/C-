#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    /*
建立由三个学生的数据组成的简单的静态链表
节点不是临时开辟的 也不能用完后释放
*/
    struct Student
    {
        int num;
        float score;
        struct Student *next;
    };
    struct Student a, b, c;
    struct Student *head, *p;
    a.num = 1001;
    a.score = 2001;
    b.num = 1002;
    b.score = 2002;
    c.num = 1003;
    c.score = 2003;
    head = &a;   //a为头节点
    a.next = &b; //a的后继节点为b
    b.next = &c;
    c.next = NULL;
    p = head;
    do
    {
        printf("%d %.1f\n", p->num, p->score);
        p = p->next; //p 指向下一个位置
    } while (p != NULL);

    system("pause");
    return 0;
}