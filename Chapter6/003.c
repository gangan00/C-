#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    /*
3阶方阵的迹
直接num+=a[i][i]
*/
    int a[3][3] = {
        1,
        2,
        3,
        4,
        5,
        6,
        7,
        8,
        9,
    },
        num = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%5d", a[i][j]);
            if (i == j)
            {
                num += a[i][j];
                //这样多此一举
            }
        }

        printf("\n");
    }
    printf("%d", num);
    system("pause");

    return 0;
}