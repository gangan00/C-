#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    /*
求m,n的最大公约数和最小公倍数
*/
    int m, n, max, min;
    scanf("%d%d", &m, &n);
    min = m < n ? m : n;
    for (; min > 0; min--)
    {
        if (m % min == 0 && n % min == 0)
        {
            printf("max gongyueshu is %d", min);
            break;
        }
    }

    system("pause");
    return 0;
}