#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    /*
查找完数
因子相加等于自己
*/
    int a = 1000, k = 0, sum = 0;
    for (int i = 1; i <= a; i++)
    {
        sum = 0;
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {

                
                //printf("%d",k);
                sum += j;
            }
        }
        //printf("%d",sum);
        if (sum == i)
        {
            printf("%d\n", sum);
        }
    }

    system("pause");
    return 0;
}