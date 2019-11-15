#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    /*
strcpy;
*/
    char s1[8] = {}; //我发现直接char s1[8];,里面的地址是乱七八糟的，并没有全是000;
    char s2[8] = "asD\0bb";
    printf("%d\n", strlen(s2));
    printf("%s\n", strlwr(s2));
    printf("%s\n", strupr(s2));
    // gets(s2);
    for (int i = 0; i < strlen(s2); i++)
    {
        s1[i] = s2[i];
    }
    printf("s1: %s\n", s1);

    system("pause");
    return 0;
}