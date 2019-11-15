#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    /*
计算s= a + aa + aaa + ……+aaa(n个)
*/
    int num(int n);
    int a = 2, n, s = 0;
    int nums = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {

        nums = num(i);
        s += nums;
        printf("total s=%d\n", s);
    }

    system("pause");
    return 0;
}

int num(int n)
{
    int a = 2, s = 0;
    double num;
    for (int i = 1; i <= n; i++)
    {
        num = a * pow(10, i - 1);
        s += num;
        printf("num = %f\n", num);
    }
    printf("s=%d\n", s);
    return s;
}