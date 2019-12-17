#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    /*
a=25/3%3 
*/
    int a, b=3;
    a = 25 / 3 % 3;
    printf("%d\n", b + 1.78);//错误 %d不能输出实型 百度上说跟编译有关系 
    printf("%f\n", b + 1.78);//正确
    b = b + 1.78; //如果再把值赋给b 又转换为int 

    printf("%d\n", a);
    printf("%d\n", b);

    system("pause");
    return 0;
}