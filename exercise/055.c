#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    /*
一个文件操作的题
*/

    FILE *f;
    char s1[] = "china", s2[] = "beijing";
    f = fopen("abc.txt", "wb+");
    fwrite(s2, 7, 1, f);
    rewind(f); //文件位置指针回到文件开头
    fwrite(s1, 5, 1, f);
    fclose(f);
    system("pause");
    //result:chinang
    return 0;
} 