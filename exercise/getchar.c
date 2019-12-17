#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    /*
getchar 的返回值 不能获取到按键上下左右 
百度说需要两个ch来接受 试一下
*/

    char c; //定义一个字符

    printf("input a character\n");

    c = getchar(); //从键盘获取一个字符
    printf("%c\n", c);
    printf("int : %d\n", c);
    putchar(c); //输出字符
    printf("╔");
    system("pause");
    return 0;
}