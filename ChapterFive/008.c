#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    /*
水仙花数 是三位数字
*/
    int a, b, c, d;
    for (int i = 100; i < 1000; i++)
    {
        a = i / 100;
        b = i % 100 / 10;
        c = i % 10;
        if (a * a * a + b * b * b + c * c * c == i)
        {

            printf("parci ssus numbers is %d\n", i);
        }
    }

    system("pause");
    return 0;
}