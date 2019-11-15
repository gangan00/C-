#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    /*
char 类型应该复制范围在0-127之间 

*/
    char a, b;
    a = 97;
    b = 98;
    printf("%c\n", a);
    printf("%c\n", b);
    a = 197;
    b = 198;
    printf("%c\n", a);
    printf("%c\n", b);

    system("pause");
    return 0;
}