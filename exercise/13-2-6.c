#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    /*

*/
    union name {
        char s[2];
        int x;
    };
    union name n;
    n.x = 0x4241;
    printf("%d\n", n.s[0]);
    printf("%d\n", n.s[1]);

    system("pause");
    return 0;
}