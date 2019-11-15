#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    /*
feibonacci
*/
    int f1 = 1, f2 = 1;
    for (int i = 1; i <= 20; i++)
    {

        printf("%12d%12d", f1, f2);

        if (i % 2 == 0)
        {
            printf("\n");
        }
        f1 = f1 + f2;
        f2 = f1 + f2;
    }
 
    system("pause");
    return 0;
}