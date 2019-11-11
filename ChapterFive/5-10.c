#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    /*
100-200之间的素数
*/
    int a, i, k;
    for (a = 101; a <= 200; a+=2)
    {

        k = sqrt(a);
        for (i = 2; i <= k; i++)
        {
            if (a % i == 0)
            {
                //printf("i=%d\n", i);
                //printf("a=%d\n", a);
                //printf("%d is not sushu\n", a);
                break;
            }
        }
        if (i > k)
        {
            printf("%d  is  sushu\n", a);
        }
    }
 
    system("pause");
    return 0;
}