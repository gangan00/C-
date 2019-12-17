#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    /*

*/
    int a = 1, b = 2;
    a = a + b;
    b = a - b;
    a = a - b;
    printf("%d , %d \n", a, b);

    system("pause");
    return 0;

}