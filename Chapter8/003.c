#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int *input_tennumbers();
    //输入函数
    void paixu(int a[]);
    //做题
    void print_int(int a[]);
    //打印函数
    int *p;

    p = input_tennumbers();
    paixu(p);
    printf("-----------------------\n");
    print_int(p);

    /*
输入十个整数，其中最小的数与第一个数对换，最大的数和最后一个兑换。
*/

    system("pause");
    return 0;
}

int *input_tennumbers()
{
    static int a[10] = {13, 22, 999, 24, 25, 57, 46, 34, 1, 314};
    //for (int i = 0; i < 10; i++)
    //{

    //scanf("%d\n", &a[i]);
    //}省时间不输入了

    //百度说C语言不能直接返回一个数组
    //C 不支持在函数外返回局部变量的地址，除非定义局部变量为 static 变量
    return a;
}

void print_int(int *a)
{
    for (int i = 0; i < 10; i++)
    {

        printf("%d\n", *(a + i));
    }
}

void paixu(int a[])
{

    int min = a[0], max = a[0], temp, j = 0, k = 0;

    for (int i = 0; i < 10; i++)
    {
        if (min > a[i])
        {
            min = a[i];
            j = i;
        }
        if (max < a[i])
        {
            max = a[i];
            k = i;
        }
    }
    temp = a[0];
    a[0] = min;
    a[j] = temp;
    temp = a[9];
    a[9] = max;
    a[k] = temp;
}