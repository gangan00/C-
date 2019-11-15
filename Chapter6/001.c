#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    /*
筛选法求100之内的素数
*挖去1
*用下一个数除后面所有的数字
*只需要到根号n就够了
*/
    int a[1000];
    for (int i = 0; i < 1000; i++)
    {
        a[i] = i + 1;
    }
    //*挖去1
    a[0] = 0;
    for (int i = 1; i < sqrt(1000); i++)
    {
        for (int j = i + 1; j < 1000; j++)
        {
            if (a[i] && a[j])
            {
                //两个值都不为零
                if (a[j] % a[i] == 0)
                    a[j] = 0;
                //取余
            }
        }
    }
    for (int i = 0, n = 0; i < 1000; i++)
    {
        if (a[i] != 0)
        {

            printf("%5d", a[i]);
            n++; //控制格式
        }
        if (n == 10)
        {
            printf("\n");
            n = 0;
        }
    }
    printf("\n");
    system("pause");
    return 0;
}