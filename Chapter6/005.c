#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    /*
将一个数组中的值按逆序重新存放，也就是反转数组
*/
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, temp;
    for (int i = 0; i < 5; i++)
    {
        temp = a[i];
        a[i] = a[9 - i];
        a[9 - i] = temp;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%5d", a[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}