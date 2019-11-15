#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int a, n, a1;
    scanf("%d",&a);
    if (a > 0 && a < 10)
    {
        printf("1");
        n = 1;
    }
    else if (a >= 10 && a < 100)
    {
        n = 2;
        printf("%d numbers\n", n);
    }
    else if (a >= 100 && a < 1000)
    {
        n = 3;
        printf("%d numbers\n", n);
    }
    else if (a >= 1000 && a < 10000)
    {
        n = 4;
        printf("%d numbers\n", n);
    }
    else if (a >= 10000 && a < 100000)
    {
        n = 5;
        printf("%d numbers\n", n);
    }
    else
    {
        n = 0;
        printf("%d",a);
        printf("unkonw");
    }
    switch (n)
    {
    case 1:
        /* code */
        a1 = a;
        printf("after%d\n", a1);
        break;
    case 2:
        a1 = (a % 10) * 10 + (a / 10);
        printf("after%d\n", a1);
        break;
    case 3:
        /* code */
        a1 = (a%10)*100+(a%100/10)*10+a/100;
        printf("after%d\n", a1);
        break;
    case 4:
        a1 = (a%10)*1000+(a%100/10)*100+(a%1000/100)*10+a/1000;
        printf("after%d\n", a1);
        break;
    case 5:
        a1 = (a%10)*10000+(a%100/10)*1000+(a%1000/100)*100+(a%10000/1000)*10+a/10000;
        printf("after%d\n", a1);
        break;

    default:
        break;
    }

    system("pause");
    return 0;
}