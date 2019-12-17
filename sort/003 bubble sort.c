#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int a[10] = {1, 1, 23, 45, 7, 8, 13, 42, 12, 43};
int main()
{
    /*
冒泡排序
*/

    int flag = 0, temp;
    for (int i = 0; i < 9; i++)

    {
        flag = 0; //表示本趟冒泡是否发生交换的标志
        for (int j = 9; j > i; j--)
        {
            if (a[j - 1] > a[j])
            {
                temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }

            flag = 1;
        }
    }
    if (flag == 0)
    {

        return;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%5d", a[i]);
    }
    system("pause");
    return 0;
}
