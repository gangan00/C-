#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    /*
删除列表里值为x的元素
*/
    int i = 0, j = 0, a[] = {1, 2, 3, 4, 4, 3, 5, 62, 23, 3, 4, 5, 8, 7, 6, 5, 6, 3, 2, 9, 4, 3};
    int n = sizeof(a) / 4;
    printf("n= %d\n",n);
    for (j = 0; j < n; j++)
    {

        if (a[j] != 3)
        {
            a[i] = a[j];
            i++;
        }
    }
    for(int k = 0; k < i; k++)
    {
    printf("%5d\n", a[k]);
    }
    system("pause");
    return 0;
}