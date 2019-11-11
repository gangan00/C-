#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int a[10] = {1, 23, 4, 423, 24, 23, 4123, 43332, 4234, 87};
    //下标法
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", a[i]);
    }
    //指针法
    for(i=0;i<10;i++){

        printf("%d\n",*(a+i));
    }
    int *p =a;
    while (p<a+10)
    {
        /* code */
        printf("%d\n",*(p++));
    }

    system("pause");
    return 0;
}