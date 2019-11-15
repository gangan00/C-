#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    /*

*/
    int n1 = 100, n2 = 50, n3 = 10;
    double k, s1 = 0, s2 = 0, s3 = 0,sum=0;
    for (k = 1; k <= n1; k++)
    {
        s1 += k;
    }
    for (k = 1; k <= n2; k++)
    {
        s2 += k * k;
    }
    for (k = 1; k <= n3; k++)
    {
        s3 += 1 / k;
    }
    printf("s1 = %15.6f\n", s1);
    printf("s2 = %15.6f\n", s2);
    printf("s3 = %15.6f\n", s3);
    printf("sum = %15.6f\n", s1 + s2 + s3);
    system("pause");
    return 0;
}