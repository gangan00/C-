#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 15
int main()
{
    /*
输出杨辉三角形
*/
    int i, j, a[N][N];

    for (i = 0; i < N; i++)
    {
        a[i][i] = 1; //第一列和最后一列都是1
        a[i][0] = 1;
    }
    for (i = 2; i < N; i++)
    { //从第三行第二列开始
        for (j = 1; j <= i - 1; j++)
        {
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        }
    }
    for (i = 0; i < N; i++)
    {
        for (j = 0; j <= i; j++)
        //因为上面a[i][i]=1,i是一个下标
        {
            printf("%6d", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    system("pause");
    return 0;
}