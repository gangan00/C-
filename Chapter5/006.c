#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    /*
求1-20阶乘的和 这个需要使用 double ,int 已经不够表示了
*/
    double s = 0, t = 1;
    int n;
    for (n = 1; n <= 20; n++)
    {

        t = t * n;
        s = s + t;
        printf("number=%f\n", s);
    }
    printf("result = %g\n", s);
    printf("result = %22.15e\n", s);
    printf("int = %d\n", sizeof(int));
    printf("long int = %d\n", sizeof(long int));
    printf("float = %d\n", sizeof(float));
    printf("double = %d\n", sizeof(double));
    system("pause");

    return 0;
}