#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void prinf_intarray(int a[],int n)
{
    /*
打印数组
*/
    //printf("%d", sizeof(a) / 4);
    /*原因是数组作为参数传给函数时，是传给数组的地址，而不是传给整个的数组空间，因而
        sizeof(arr)这句话会报错
        正确的用法是：不在函数内部使用sizeof
*/
    for (int i = 0; i < n; i++)
    {

        printf("%5d\n", a[i]);
    }
}

void prinf_parray(int *a,int n)
{
    /*
打印数组
*/
    for (int i = 0; i < n; i++)
    {

        printf("%5d\n", *(a+i));
    }
}

int main()
{
    /*

*/

    int a[5] = {1, 2, 3, 4, 5};

    //prinf_intarray(a,5);
    prinf_parray(a,5);

    system("pause");
    return 0;
}
