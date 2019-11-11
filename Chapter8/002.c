#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    /*
输入三个字符串按照从小到大的顺序排列
*/
    void swap(char *p1, char *p2);

    char str1[20], str2[20], str3[20], *strmax;

    printf("input three line\n");
    //gets() 函数的功能是从输入缓冲区中读取一个字符串存储到字符指针变量 str 所指向的内存空间
    //使用 gets() 时，系统会将最后“敲”的换行符从缓冲区中取出来，然后丢弃，所以缓冲区中不会遗留换行符
    gets(str1);
    gets(str2);
    gets(str3);

    if (strcmp(str1, str2) > 0)
    {
        swap(str1, str2);
    }
    if (strcmp(str1, str3) > 0)
    {
        swap(str1, str3);
    }
    if (strcmp(str2, str3) > 0)
    {
        swap(str2, str3);
    }

    puts(str1);
    puts(str2);
    puts(str3);

    system("pause");
    return 0;
}

void swap(char *p1, char *p2)
{
    char p[20];
    strcpy(p, p1);
    strcpy(p1, p2);
    strcpy(p2, p);
}