#define _CRT_SECURE_NO_WARNINGS
#define f(x) x *x *x
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    /*
带参数的宏 直接用参数替换宏中的参数
*/
    int a = 3, s, t;
    s = f(a + 1);
    t = f((a + 1));
    printf("s=%d\nt=%d\n", s, t);

    system("pause");
    return 0;
}