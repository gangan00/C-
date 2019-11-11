#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
/*

*/
int x=3;
do
{
    printf("%d\n",x-=2);
} while (!(--x));


system("pause");
return 0;
}