#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
/*
getchar()连续输入 不能有空格
*/
char a,b;
int c,d;
a = getchar();
b = getchar();
putchar(a);
putchar(b);

system("pause");
return 0;
}