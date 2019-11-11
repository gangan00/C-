#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int a[5] = {1, 2, 3, 4, 5};
int main()
{
    /*


*/

    int change(int a[5]);
    change(a);
    printf("%d\n", a[4]);
    system("pause");
    return 0;
}

int change(int a[5])
{

    a[4] = 999;
    printf("change value %d\n", a[4]);
}