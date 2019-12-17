#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    /*
折半插入排序 先查找 在后移元素
*/

    int i, j, low, high, mid;
    int a[10] = {0, 4, 6, 8, 12, 15, 16, 18, 3, 4};
    for (i = 2; i < 10; i++)
    {

        a[0] = a[i];
        low = 1;
        high = i - 1; //折半查找范围
        while (low <= high)
        {

            mid = (low + high) / 2;
            if (a[0] > a[mid])
                low = mid + 1; //先插入的元素大于中间值 查找右边的表
            else
                high = mid - 1;
        }
        for (j = i - 1; j >= high + 1; --j)
            a[j + 1] = a[j];

        a[high + 1] = a[0];
    }

    for (int i = 1; i < 10; i++)
    {
        printf("%5d", a[i]);
    }
    system("pause");
    return 0;
}