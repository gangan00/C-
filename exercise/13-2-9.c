#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    /*

*/
    static int a[3][2] = {1, 2, 3, 4, 5, 6};
    int k, t;
    int(*p)[2];
    p = a;
    k = *(*(a + 2) + 1);
    printf("%d\n", k);
    t = *(*(p + 1) + 1);
    printf("%d\n", t);
    printf("%d\n", (3.5+1/2));
    printf("%f\n", (3.5+1/2));
    system("pause");
    return 0;
}