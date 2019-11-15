#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    /*
有一个已经排好序的数组，要求输入一个数后 按照原来的规律将他插入到数组中
用数组实现就需要修改下标 麻烦 还需要事先定义一个比较大的数组 
还不能搞清楚最后一个位置是哪里
*/
    int a[11] = {1, 22, 35, 43, 52}, n;
    int temp1, temp2;
    printf("before");
    for (int i = 0; i < 11; i++)
    {
        if (a[i])
        {
            printf("%5d", a[i]);
        }
    }
    printf("\n");
    printf("insert data: ");
    scanf("%d", &n);
    if (n > a[4])
    //如果a比最后一个值大就直接放在最后了
    {
        a[5] = n;
    }
    else
    {
        for (int i = 0; i < 11; i++)
        {
            if (a[i] > n)
            {
                temp1 = a[i];
                a[i] = n; //把n插入在i的位置
                for (int j = i + 1; j < 11; j++)
                {
                    temp2 = a[j];
                    a[j] = temp1;
                    temp1 = temp2;
                }
                break;
            }
        }
    }
    printf("\n");
    printf("after:");
    for (int i = 0; i < 11; i++)
    {
        if (a[i])
        {
            printf("%5d", a[i]);
        }
    }
    system("pause");
    return 0;
}
