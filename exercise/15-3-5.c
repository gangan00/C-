#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    /*

*/
    int i;
    int n = 2;
    while (++n < 20)
    {
        i = 1;
        while (++i < n)
        {
            if (n % i == 0)
                break;
            if (i == n - 1)
                printf("% d\t", n);
        }
        printf("\n");
    }

    system("pause");
    return 0;
}