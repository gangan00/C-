#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student
{
    int num;
    float score;
    struct Student *next;
};

struct Student *create(void)
{
    struct Student *p;
    //开辟空间
    p = (struct Student *)malloc(sizeof(struct Student));
    //scanf("%d %f", &p->num, &p->score); 懒得输入
    p->num = 28;
    p->score = 90;
    return p;
}

void print(struct Student *head)
{
    struct Student *p;
    p = head;
    if (head != NULL)
    {
        do
        {
            printf("%d %.1f\n", p->num, p->score);
            p = p->next;
        } while (p != NULL);
    }
}

int main()
{
    /*
动态链表
*/
    struct Student *pa, *pb, *pc;
    pa = create();
    pb = create();
    pa->next = pb;
    pc = create();
    pb->next = pc;
    pc->next = NULL;
    print(pa);
    system("pause");
    return 0;
}