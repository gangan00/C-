#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int a[10] = {1, 1, 23, 45, 7, 8, 13, 42, 12, 43};

int main()
{
    /*
简单选择排序 不稳定
*/
    int min, temp;
    for (int i = 0; i < 9; i++)
    {
        min = i; //最小元素位置
        for (int j = i + 1; j < 10; j++)
        {
            if (a[j] < a[min])
            {

                min = j; //更新最小元素位置
            }
        }
        if (min != i)
        {
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%5d", a[i]);
    }
    system("pause");
    return 0;
}