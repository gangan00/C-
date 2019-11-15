#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    /*
用选择法对十个整数排序
*/

    int a[10] = {432, 32, 97, 477, 123, 423, 87, 4123, 4145, 22343};
    int min;
    for (int i = 0; i < 9; i++)
    {
        min = a[i];
        for (int j = i + 1; j < 10; j++)
        {
            if (a[j] < a[i])
            {
                min = a[i];
                a[i] = a[j];
                a[j] = min;
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {

        printf("%5d\n", *(a + i));
    }

    system("pause");
    return 0;
}
