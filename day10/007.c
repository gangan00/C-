#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    /*
if的执行
*/
    int x = 1, y = 2, z = 3;
    if (x > y)
        if (y < z)
            printf("%d", ++z);
        else
            printf("%d", ++y);
    printf("%d\n", x++);

    system("pause");
    return 0;
    //结果应该改是1
}