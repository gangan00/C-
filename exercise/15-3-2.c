#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    /*

*/
    typedef struct student
    {
        char name[10];
        long sno;
        float score;
    } STU;
    STU
        a = {"Zhangsan", 2001, 95},
        b = {"Shangxian", 2002, 90}, c = {"Anhua", 2003, 95}, d, *p = &d;
    d = a;
    if (strcmp(a.name, b.name) > 0)
        d = b;
    if (strcmp(c.name, d.name) > 0)
        d = c;
    printf("%ld %s\n", d.sno, p->name);

    system("pause");
    return 0;
}