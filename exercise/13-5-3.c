#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int prime(int a);
    /*
求双素数
*/
    int i = 1, a = 1;
    for (; i < 100; i += 2)
    {
        if (prime(i) && ((i - a) == 2))
        {
            printf("%d %d\n ", a, i);
            a = i;
        }
    }

    system("pause");
    return 0;
}

int prime(int a)
{
    for (int i = 2; i < sqrt(a); i += 1)
    {
        if (a % i == 0)
            return 0;
    }
    return 1;
}