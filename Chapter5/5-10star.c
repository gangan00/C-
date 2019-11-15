#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    /*

*/
    int a, i, k;
    scanf("%d", &a);
    k = sqrt(a);
    for (i = 2; i <= k; i++)
    {
        if (a % i == 0)
        {
            printf("i=%d\n", i);
            printf("a=%d\n", a);
            printf("%d is not sushu\n", a);
            break;
        }
    }
    if (i <= k)
    {
        printf("%d  is  not sushu", a);
    }else{
        printf("%d  is  sushu", a);
    }

    system("pause");
    return 0;
}