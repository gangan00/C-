#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    /*
2/1,3/2,5/3,8/5,……
*/
    int i, n = 20;
    double sum = 0, a = 2, b = 1, t;
    for (i = 1; i <= n; i++)
    {

        sum += a / b;
        t = a;
        a = a + b;
        b = t;
    }
    printf("%-16.10f\n", sum);
    system("pause");
    return 0;
}

