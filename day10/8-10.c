#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    /*
指针的方法对10个整数进行大小排列
*/
    extern void print_int_list(int *a, int n);
    void sort(int *p);
    int a[10] = {1, 2, 4, 54, 12, 9, 123, 462, 24, 22};

    sort(a);
    print_int_list(&a[0], 10);

    system("pause");
    return 0;
}
void sort(int *p)
{
    for (int i = 0; i < 10; i++)
    //从零开始
    {
        int j = i, temp;
        for (; j < 10; j++)
        {
            //跟后面的数字依次比较
            if (*(p + i) < *(p + j))
            {

                temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
    }
}
void print_int_list(int *a,int n){
    int i =0;
    for(i=0;i<n;i++){
    printf("%d\n",*(a+i));
}
}