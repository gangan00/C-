#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    /*
统计一句话里有多少 字符 空格 等等
*/
    char c;
    int letter = 0, space = 0, digit = 0, other = 0;
    printf("please input:\n");
    while ((c = getchar()) != '\n')
    /*
    当用户键入回车之后，getchar才开始从stdin流中每次读入一个字符。
    如用户在按回车之前输入了不止一个字符，其他字符会保留在键盘缓存区中，等待后续getchar调用读取。也就是说，
    后续的getchar调用不会等待用户按键，而直接读取缓冲区中的字符，直到缓冲区中的字符读完后，才等待用户按键。
    */
    {
        if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
        {
            letter++;
        }
        else if (c == ' ')
        {
            space++;
        }
        else if (c >= '0' && c <= '9')
        {
            digit++;
        }
        else
        {
            other++;
        }
    }
    printf("letter:%d\n", letter);
    printf("space:%d\n", space);
    printf("digit:%d\n", digit);
    printf("other:%d\n", other);

    system("pause");
    return 0;
}