#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    /*
直接插入排序
*/

    int a[10] = {0, 1, 23, 45, 7, 8, 13, 42, 12, 43}, j;
    for (int i = 2; i < 10; i++)
    {
        //第一个数字认为已经有序
        if (a[i] < a[i - 1])
        {                                     //后一个数字小于前一个数字
            a[0] = a[i];                      //把a[i]的值放在a[0]里
            for (j = i - 1; a[0] < a[j]; --j) //从后往前一次查找a[i]应该插入的位置 最多找到a[0]的位置也能结束循环
                a[j + 1] = a[j];              //向后挪一位
            a[j + 1] = a[0];                  //找到了a[i]应该插入的位置在a[j]的后面
        }
    }

    for (int i = 1; i < 10; i++)
    {
        printf("%-5d", a[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}
