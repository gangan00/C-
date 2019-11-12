#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    /*
注意考试题目中可能没有default: break 会往下执行case 2;
*/
    int c = 0;
    for (int k = 1; k < 3; k++)
    {
        switch (k)
        {
        default:
            c += k;

        case /* constant-expression */ 2:
            c++;
            /* code */
            break;
        case 4:
            c += 2;
            break;
        }
    }
    printf("%d", c);

    system("pause");
    return 0;
}
