#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    /*
对书上这个例子的for 循环在末尾加'\0'表示怀疑
*/
    char a[20] = "i am a student", b[20], *p1, *p2;
    p1 = a;
    p2 = b;
    for (; *p1 != '\0'; p1++, p2++)
    {

        *p2 = *p1;
        //*p2 = '\0';//书上的写法 实践证明不对
        *(p2 + 1) = '\0'; //这样就可以
    }
    p1 = a; //重新指向a的首地址
    printf("a = %s\n", p1);
    printf("b = %s\n", b);
    system("pause");
    return 0;
}