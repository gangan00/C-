#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    /*
feibonacci
*/
    int f1 = 1, f2 = 1, f3;

    for (int i = 1; i <= 40; i++)
    {
        if (i == 1 || i == 2)
        {
            f3 = 1;
        }
        else
        {
            f3 = f1 + f2;

            f1 = f2;
            f2 = f3;
        }
        printf("%12d\n", f3);
    }

    system("pause");
    return 0;
}