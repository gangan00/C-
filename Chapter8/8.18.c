#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    /*
将字符串a赋值给字符串b，然后输出字符串b
*/
    char a[] = "i am a student", b[30], *p;
    strcpy(b, a); //1 直接使用函数赋值没有问题
    //for (int i = 0; *(a + i) != '\0'; i++)
    //{ //2 按地址赋值
    //*(b + i) = *(a + i);
    //*(b + i + 1) = '\0'; //可以解决打印空格的问题
    //}

    p = b;
    printf("%s\n", p);
    printf("first value = %c\n", *p);
    //不是*p;
    //for (int i = 0; b[i] != '\0'; i++)
    //{ //一个一个输出
    //printf("%c", b[i]);
    //}
    system("pause");
    return 0;
}