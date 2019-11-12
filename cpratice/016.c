#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int f(int);
int main()
{
    /*
static 定义的变量不会重新重复赋值吗？

*/
    int a = 3, s;
    s = f(a);
    s = s + f(a);
    printf("%d\n", s);

    system("pause");
    return 0;
}
int f(int n)
{

    static int a = 1;
    n += a++;
    return n;
}