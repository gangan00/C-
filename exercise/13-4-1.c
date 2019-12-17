#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    /*

*/
    int a, b, c, i;
    for (a = 0; a < 9; a++)
    {
        for (b = 0; b < 9; b++)
        {
            for (c = 0; c < 9; c++)
            {

                if ((100 * a + 10 * b + c + 100 * b + 10 * c + c) == 532)
                    printf("a=%d b=%d c=%d\n", a, b, c);
            }
        }
    }

    system("pause");
    return 0;
}