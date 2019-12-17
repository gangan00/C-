#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *ss(char *s)
{
    return s + strlen(s) / 2;
}
int main()
{
    /*

*/

    char *p, *str = "abcdefgh";
    p = ss(str);
    printf("%s\n", p);

    system("pause");
    return 0;
}