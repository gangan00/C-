#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    float f(float i);
    float result;
    float n=1000000.0, i;
    float sum = 0;

    for (i = 0; i < n; i++)
    {
        result = f(i / n);
        sum += (1.0 / n) * result;
    }
    printf("sum=%.4f",sum);
    system("pause");
    return 0;
}

float f(float i)
{
    i = 1.0 + i;
    return 2 * (i * i) + i;
}