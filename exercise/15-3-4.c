#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int sum1(int n)
{
    int p = 0, s = 0, i;
    for (i = 1; i < n; i++)
    {
        if (i % 2)
            continue;
        s += p += i;
    }
    return s;
}
int main()
{
    /*

*/
    printf("%d\n", sum1(10));

    system("pause");
    return 0;
}